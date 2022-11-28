/*
Едно число наричаме супер-просто, ако то е просто и позицията му сред всички прости числа е също просто число.
Първите няколко такива са 3, 5, 11, 17 и тн.
По дадено число N изведете всички супер-прости числа по-малки или равни на N.
Максималният размер на N е 1024.

Input: 7
Output: 3 5
3 e супер-просто, защото се намиар на втора позиция сред всички прости числа (2, 3, 5, 7, 11, 13,
17, 19, 23, ...) и 2 също е просто число. Подобно
5 се намира на трета позиция и 3 е просто число.

Input: 17
Output: 3 5 11 17
*/

#include <iostream>

int main()
{
    const int MAX_SIZE = 1024;
    // int n = 241;

    int n;
    std::cin >> n;

    // validation
    if (n >= MAX_SIZE)
    {
        throw std::exception();
    }

    std::cout << "Super-Primes less than or equal to " << n
              << " are :" << std::endl;

    // Решетото на Ератостен
    // isPrime[i] ще бъде false ако i не е просто число
    bool isPrime[MAX_SIZE] = {false, false};

    for (int i = 2; i <= n; i++)
    {
        isPrime[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        // Ако isPrime[i] не се е променило от предишната итерация, значи то е просто
        if (isPrime[i])
        {
            // Обновяваме всички кратни на i
            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // Подреждаме всички генерирани прости числа в масив
    // primes[]
    int primes[MAX_SIZE], j = 0;
    for (int p = 2; p <= n; p++)
    {
        if (isPrime[p])
        {
            primes[j++] = p;
        }
    }

    // Принтираме числата, които се намират на позиция просто число в редицата от прости числа
    for (int i = 0; i < j; i++)
    {
        if (isPrime[i + 1])
        {
            std::cout << primes[i] << " ";
        }
    }
    std::cout << '\n';
    // Super-Primes less than or equal to 241 are:
    // 3 5 11 17 31 41 59 67 83 109 127 157 179 191 211 241
}