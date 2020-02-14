// Homework-1-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>


void duzUcgen(int deger)
{
	for (int tryCount = 0; tryCount < 3; tryCount++)
	{

		if (deger < 3 || deger > 15 || deger % 2 == 0) 
		{
			std::cout << "boyut> ";

			std::cin >> deger;

			continue;
		}


		int floorCount = (deger + 1) / 2;

		for (int i = 1; i <= floorCount; i++)
		{
			int spaceCount = floorCount - i;

			for (int j = 0; j < spaceCount; j++)
				std::cout << " ";

			int asteriskCount = i * 2 - 1; // current floor * 2 - 1

			for (int j = 0; j < asteriskCount; j++)
				std::cout << "*";

			std::cout << std::endl;
		}



		break;
	}
}


void tersUcgen(int deger)
{
	int tryCount = 3;

	while (tryCount-- > 0)
	{

		if (deger < 3 || deger > 15 || deger % 2 == 0)
		{
			std::cout << "boyut> ";

			std::cin >> deger;

			continue;
		}
		

		int floorCount = (deger + 1) / 2, i = floorCount;

		while (i >= 1)
		{
			int spaceCount = floorCount - i;

			while (spaceCount-- > 0)
				std::cout << " ";

			int asteriskCount = i * 2 - 1; // current floor * 2 - 1

			while (asteriskCount-- > 0)
				std::cout << "*";

			std::cout << std::endl;

			i--;
		}



		break;
	}
}


bool elmas(int deger)
{
	if (deger < 5 || deger > 15 || deger % 2 == 0) return false;

	duzUcgen(deger);

	tersUcgen(deger);

	return true;
}

void test(int tryCount)
{
	if (tryCount <= 0) return;

	int deger;

	std::cout << "boyut> ";

	std::cin >> deger;

	if (!elmas(deger))
		test(tryCount - 1);

}

int main()
{
	duzUcgen(NULL);

	//tersUcgen(NULL);

	//test(3);

	return 0;
}