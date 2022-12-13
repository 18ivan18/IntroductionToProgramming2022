#include <iostream>
#include <chrono>
#include <thread>

#ifdef _WIN32
#define CLEAR "cls"
#else // Assume POSIX
#define CLEAR "clear"
#endif

void step(int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << " ";
	}
}

void bus(int move)
{
	step(move);
	std::cout << " _________________________" << std::endl;
	step(move);
	std::cout << "|   |     |     |    | |  \\" << std::endl;
	step(move);
	std::cout << "|___|_____|_____|____| |___\\" << std::endl;
	step(move);
	std::cout << "|                    | |    \\" << std::endl;
	step(move);
	std::cout << "`--(o)(o)--------------(o)--'" << std::endl;
}

// Решение предоставено от Мартин Николов
int main()
{
	int fps = 60, ms = 1.0 / fps * 1000;
	for (int i = 0; i < 100; i++)
	{
		std::system(CLEAR);
		bus(i);
		std::this_thread::sleep_for(std::chrono::milliseconds(ms));
	}
}