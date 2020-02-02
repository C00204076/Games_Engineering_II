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

const int n = 10;
std::atomic_int _number;
std::atomic_int _next;
std::atomic_int _turn[n];
int numThreads;
std::mutex coutMutex;

std::ostringstream data;

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
	int i = numThreads++;  //Intentional post-increment

	coutMutex.lock();
	std::cout << "Thread " << i << " reporting in." << std::endl;
	coutMutex.unlock();

	std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 500 + 500));

	while (true)
	{
		//Take a ticket
		_turn[i] = _number.fetch_add(1);

		//Using a mutex for output so that threads don't uppercut each other on the console.
		coutMutex.lock();
		std::cout << "t" << i << "\tturn: " << _turn[i] << std::endl;
		coutMutex.unlock();

		//Slow down the program so that we can read the console.
		std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 500 + 500));

		while (_turn[i] != _next)
		{
			continue;
		}

		coutMutex.lock();
		std::cout << "t" << i << "\t+CS" << std::endl;
		coutMutex.unlock();

		//critical section
		data << " data_t" << i;

		//exit protocol
		_next += 1;

		coutMutex.lock();
		std::cout << data.str() << std::endl;
		std::cout << "t" << i << "\tnext = " << _next << std::endl;
		coutMutex.unlock();
	}
}

//
int main()
{

	srand(time(NULL));

    data = std::ostringstream();

    numThreads = 0;
    _number = 1;
    _next = 1;
    for (int i = 0; i < n; i++)
    {
        _turn[i] = 0;
    }

    std::thread t1 = std::thread(ticket);
    std::thread t2 = std::thread(ticket);
    std::thread t3 = std::thread(ticket);  //Add as many threads as you like
    //std::thread t4 = std::thread(ticket);
    //std::thread t5 = std::thread(ticket);

    t1.join();
    t2.join();
    t3.join();
    //t4.join();
    //t5.join();


	return 0;
}