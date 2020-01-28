//
// C00204076
// Brandon Seah-Dempsey 
// Started at
// Finished at
// Time taken:
// Known bugs:

#include <iostream>
#include <thread>
#include <time.h>

int m_buf; 
int m_p = 1; 
int m_c = 1; 
int m_n = 500;

//
void producer()
{
	static int m_a = 0;

	std::cout << "Producer starting!" << std::endl;

	while (m_p < m_n)
	{
		while (m_p != m_c)
		{
			//	std::cout << "Short order!" << std::endl;
		}

		m_a = (int)rand() * 100;
		std::cout << "Making burger: " << m_p << std::endl;
		m_buf = m_a;
		m_p = m_p + 1;
	}
	std::cout << "Finished burger production!" << std::endl;
}

//
void consumer()
{
	static int m_b = 0;

	std::cout << "Consumer starting!" << std::endl;
	while (m_c < m_n)
	{
		while (m_p <= m_c)
		{
			//std::cout << "Starving! Waiting on a burger" + c << std::endl;
		}
		std::cout << "Eating Burger: " << m_c << std::endl;
		m_b = m_buf;
		m_c = m_c + 1;
	}
	std::cout << "Burgers Consumed!" << std::endl;
}

//
int main()
{
	srand(time(NULL));

	std::thread m_t1(producer);
	std::thread m_t2(consumer);

	m_t1.join();
	m_t2.join();

	return 0;
}