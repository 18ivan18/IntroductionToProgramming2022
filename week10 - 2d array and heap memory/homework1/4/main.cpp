#include <iostream>

int getCount(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return count;
}

int power(int num, int n)
{
	int copy = num;
	if (n == 0)
	{
		return 1;
	}
	for (int i = 1; i < n; i++)
	{
		num = num * copy;
	}
	return num;
}

bool hasSameDigits(int n)
{
	int copyNumber = n / 10;
	while (n != 0)
	{
		while (copyNumber != 0)
		{
			if (copyNumber % 10 == n % 10)
			{
				return true;
			}
			copyNumber = copyNumber / 10;
		}

		n = n / 10;
		copyNumber = n / 10;
	}
	return false;
}

int getNumber(int n, int i)
{
	int pow = 1;
	int num = 0;
	while (n != 0)
	{
		if (i % 2 == 1)
		{
			num = num + (pow * (n % 10));
			pow = pow * 10;
		}
		i /= 2;
		n /= 10;
	}
	return num;
}

// Решение предоставено от Пламен Овчаров
int main()
{
	int q;
	std::cin >> q;
	for (size_t i = 0; i < q; i++)
	{
		int n;
		std::cin >> n;
		int count = getCount(n);
		int sum = 0;
		int powerSetLength = power(2, count);
		for (int i = 0; i < powerSetLength; i++)
		{
			int number = getNumber(n, i);
			if (!hasSameDigits(number))
			{
				sum = sum + number;
			}
		}
		std::cout << sum << '\n';
	}
}