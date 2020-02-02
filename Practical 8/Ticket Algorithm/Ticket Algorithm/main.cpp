//
// C00204076
// Brandon Seah-Dempsey
// Started at 10:15 28 January 2020
// Finished at
// Time taken:
// Known bugs:

#include <iostream>
#include <atomic>
#include <thread>
#include <mutex>
#include <sstream>

const int m_n = 10;
std::atomic_int m_number;
std::atomic_int m_next;
std::atomic_int m_turn[m_n];
int m_numThreads;
std::mutex m_coutMutex;

std::ostringstream m_data;

void ticket()
{
	//Coarse-grained
	/*int number = 1, next = 1, turn[1:n] = ([n] 0);

	## predicate TICKET is a global invariant
	
	process CS[i = 1 to n]
	{
		while (true)
		{
			<turn[i] = number; number = number + 1; >
	
			< await (turn[i] == next); >
			
			critical section;
			
			< next = next + 1; >
			
			noncritical section;
	
		}
	
	}*/

	//Fine-grained
	/*int number = 1, next = 1, turn[1:n] = ([n] 0);

	process CS[i = 1 to n]
	{
	
		while (true)
		{
	
			turn[i] = FA(number,1); // entry protocol 
	
			while (turn[i] != next) skip;
	
			critical section;
	
			next = next + 1; //exit protocol 
	
			noncritical section;
	
		}
	
	}*/

	// Ticket 
	int i = m_numThreads++;  //Intentional post-increment

	m_coutMutex.lock();
	std::cout << "Thread " << i << " reporting in." << std::endl;
	m_coutMutex.unlock();

	std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 500 + 500));

	while (true)
	{
		//Take a ticket
		m_turn[i] = m_number.fetch_add(1);

		//Using a mutex for output so that threads don't uppercut each other on the console.
		m_coutMutex.lock();
		std::cout << "t" << i << "\tturn: " << m_turn[i] << std::endl;
		m_coutMutex.unlock();

		//Slow down the program so that we can read the console.
		std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 500 + 500));

		while (m_turn[i] != m_next)
		{
			continue;
		}

		m_coutMutex.lock();
		std::cout << "t" << i << "\t+CS" << std::endl;
		m_coutMutex.unlock();

		//critical section
		m_data << " data_t" << i;

		//exit protocol
		m_next += 1;

		m_coutMutex.lock();
		std::cout << m_data.str() << std::endl;
		std::cout << "t" << i << "\tnext = " << m_next << std::endl;
		m_coutMutex.unlock();
	}
}

//
int main()
{

	srand(time(NULL));

    m_data = std::ostringstream();

    m_numThreads = 0;
    m_number = 1;
    m_next = 1;

    for (int i = 0; i < m_n; i++)
    {
        m_turn[i] = 0;
    }

    std::thread m_t1 = std::thread(ticket);
    std::thread m_t2 = std::thread(ticket);
    std::thread m_t3 = std::thread(ticket);  //Add as many threads as you like
    //std::thread m_t4 = std::thread(ticket);
    //std::thread m_t5 = std::thread(ticket);

    m_t1.join();
    m_t2.join();
    m_t3.join();
    //m_t4.join();
    //m_t5.join();


	return 0;
}