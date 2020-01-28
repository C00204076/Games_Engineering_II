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

}

//
int main()
{

	/*srand(time(NULL));

    data = ostringstream();

    numThreads = 0;
    _number = 1;
    _next = 1;
    for (int i = 0; i < n; i++)
    {
        _turn[i] = 0;
    }

    thread t1 = thread(func);
    thread t2 = thread(func);
    //thread t3 = thread(func);  //Add as many threads as you like
    //thread t4 = thread(func);
    //thread t5 = thread(func);

    t1.join();
    t2.join();
    //t3.join();
    //t4.join();
    //t5.join();
*/

	return 0;
}