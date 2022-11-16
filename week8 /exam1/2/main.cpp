#include <iostream>

const int base = 10;

int uniqueDigits(int n)
{

    bool unique = 1;

    while (unique && n)
    {
        int digit = n % base;
        int tmp = n /= base;

        while (tmp && digit != tmp % base)
        {
            tmp /= base;
        }

        unique = tmp == 0;
    }

    return unique;
}

int numberOfDigits(int n)
{
    int count = 0;
    while (n)
    {
        n /= base;
        count++;
    }
    return count;
}

int main()
{
    int q;
    std::cin >> q;
    for (size_t i = 0; i < q; i++)
    {
        int n, m;
        std::cin >> n >> m;
        // validate for different digits
        if (!(uniqueDigits(n) && uniqueDigits(m)))
        {
            std::cout << "Error. Numbers do not contain unique digits.\n";
            continue;
        }

        if (numberOfDigits(n) != numberOfDigits(m))
        {
            std::cout << "Error. Numbers do not contain the same amaount of digits.\n";
            continue;
        }

        // main logic
        int index = 0, matches = 0;
        while (n)
        {
            int digit = n % base, mCopy = m, mIndex = 0;
            while (mCopy)
            {
                if (mCopy % base == digit && mIndex != index)
                {
                    matches++;
                    break;
                }
                mCopy /= base;
                mIndex++;
            }

            index++;
            n /= base;
        }
        std::cout << matches << '\n';
    }
}