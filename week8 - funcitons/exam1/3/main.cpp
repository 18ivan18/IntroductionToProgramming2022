#include <iostream>

const int MAX_SIZE = 8192;

int main()
{
    int q;
    std::cin >> q;
    for (size_t i = 0; i < q; i++)
    {

        int numb;
        std::cin >> numb;
        if (numb > MAX_SIZE)
        {
            std::cerr << "Max amaout of elements is " << MAX_SIZE << '\n';
        }
        bool divisibleByUserInput[MAX_SIZE];
        for (size_t i = 0; i <= numb; i++)
        {
            divisibleByUserInput[i] = true;
        }

        int input;
        std::cin >> input;
        while (input != -1)
        {
            for (size_t i = 1; i <= numb; i++)
            {
                if (input % i == 0 || i % input == 0)
                {
                    divisibleByUserInput[i] = false;
                }
            }

            std::cin >> input;
        }

        for (size_t i = 1; i <= numb; i++)
        {
            if (divisibleByUserInput[i])
            {
                std::cout << i << ' ';
            }
        }
        std::cout << '\n';
    }
}