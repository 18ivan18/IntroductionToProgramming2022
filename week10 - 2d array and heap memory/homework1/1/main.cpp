#include <iostream>

// const int base = 10;

// bool isSubset(bool first[base], bool second[base])
// {
//     for (size_t i = 0; i < base; i++)
//     {
//         if (first[i] && !second[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int q;
//     std::cin >> q;
//     for (size_t i = 0; i < q; i++)
//     {
//         int n, k;
//         std::cin >> n >> k;
//         n = abs(n);
//         k = abs(k);
//         bool digitsSetN[base] = {}, digitsSetK[base] = {};
//         while (n || k)
//         {
//             if (n)
//             {
//                 digitsSetN[n % 10] = true;
//                 n /= 10;
//             }
//             if (k)
//             {
//                 digitsSetK[k % 10] = true;
//                 k /= 10;
//             }
//         }
//         bool isSubsetNK = isSubset(digitsSetN, digitsSetK), isSubsetKN = isSubset(digitsSetK, digitsSetN);
//         if (isSubsetNK && isSubsetKN)
//         {
//             std::cout << "Equal strength\n";
//         }
//         else if (isSubsetNK)
//         {
//             std::cout << "First is weaker\n";
//         }
//         else if (isSubsetKN)
//         {

//             std::cout << "Second is weaker\n";
//         }
//         else
//         {
//             std::cout << "Not comparable\n";
//         }
//     }
// }

int main()
{
    int q;
    std::cin >> q;
    for (size_t i = 0; i < q; i++)
    {
        int n, k;
        std::cin >> n >> k;
        n = abs(n);
        k = abs(k);
        int maskN = 0, maskK = 0;
        while (n)
        {
            maskN |= 1 << (n % 10);
            n /= 10;
        }
        while (k)
        {
            maskK |= 1 << (k % 10);
            k /= 10;
        }
        if ((maskN ^ maskK) == 0)
        {
            std::cout << "Equal strength\n";
        }
        else if ((maskN & maskK) == 0)
        {
            std::cout << "Not comparable\n";
        }
        else if ((maskN & maskK) == maskN)
        {
            std::cout << "First is weaker\n";
        }
        else if ((maskN & maskK) == maskK)
        {
            std::cout << "Second is weaker\n";
        }
    }
}