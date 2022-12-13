#include <iostream>
#include <iomanip>
#include <cmath>

const int MAX_SIZE = 1024;

int main()
{
    int q;
    std::cin >> q;
    for (size_t i = 0; i < q; i++)
    {
        int size1;
        std::cin >> size1;
        if (size1 > MAX_SIZE)
        {
            throw "Lenght is larger than the max size of 1024.";
        }
        double distance1 = 0;
        int prevX, prevY;
        std::cin >> prevX >> prevY;
        for (size_t i = 1; i < size1; i++)
        {
            int x, y;
            std::cin >> x >> y;
            distance1 += sqrt(pow(x - prevX, 2) + pow(y - prevY, 2));
            prevX = x;
            prevY = y;
        }

        int size2;
        std::cin >> size2;
        if (size2 > MAX_SIZE)
        {
            throw "Lenght is larger than the max size of 1024.";
        }
        double distance2 = 0;
        std::cin >> prevX >> prevY;
        for (size_t i = 1; i < size2; i++)
        {
            int x, y;
            std::cin >> x >> y;
            distance2 += sqrt(pow(x - prevX, 2) + pow(y - prevY, 2));
            prevX = x;
            prevY = y;
        }
        const double eps = 0.01;
        if (abs(distance1 - distance2) < eps)
        {
            std::cout << "true\n"
                      << std::fixed << std::setprecision(2) << distance1 << '\n';
        }
        else
        {
            std::cout << "false\n";
        }
    }
}