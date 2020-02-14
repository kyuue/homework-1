// Homework series
//

#include <iostream>

#include "CTriangle.h"

#include "CInvTriangle.h"

#include "CDiamond.h"


int main()
{
	bool exit = false;

	while (true)
	{
		int userChoose, shapeSize;

		std::cout << "shape type> ";
		std::cin >> userChoose;

		std::cout << "shape size> ";
		std::cin >> shapeSize;

		CShape* Shape = NULL;

		switch (userChoose)
		{
		case 1:
		{
			Shape = new CTriangle(shapeSize);

			break;
		}

		case 2:
		{
			Shape = new CInvTriangle(shapeSize);

			break;
		}

		case 3:
		{
			Shape = new CDiamond(shapeSize);

			break;
		}


		default:
		{
			exit = true;

			break;
		}

		}

		if (exit)
			break;

		Shape->Draw();

		delete Shape;
	}


	return 0;
}

