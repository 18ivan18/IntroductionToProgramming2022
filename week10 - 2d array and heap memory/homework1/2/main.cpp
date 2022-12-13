#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const int MAX_SIZE = 1024;
    int q;
    std::cin >> q;
    for (size_t i = 0; i < q; i++)
    {

        int l;
        std::cin >> l;
        if (l > MAX_SIZE)
        {
            throw "Lenght is larger than the max size of 1024.";
        }
        bool primes[MAX_SIZE] = {false};
        int numbers[MAX_SIZE];
        for (size_t i = 0; i < l; i++)
        {
            int number;
            std::cin >> number;
            primes[i] = isPrime(number);
            numbers[i] = number;
        }
        int counter = 0;
        for (size_t i = 0; i < l; i++)
        {
            for (size_t j = i + 1; j < l; j++)
            {
                if ((primes[i] && !primes[j]) || (primes[i] && primes[j] && numbers[i] > numbers[j]))
                {
                    counter++;
                    printf("<%d,%d> ", numbers[i], numbers[j]);
                }
            }
        }
        std::cout << counter << '\n';
    }
}