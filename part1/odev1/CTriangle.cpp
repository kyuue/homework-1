#include "CTriangle.h"

#include <iostream>

CTriangle::CTriangle(int shapeSize) : CShape(shapeSize)
{
}

void CTriangle::Draw()
{
	if (this->size < 3 || this->size % 2 == 0) return;

	int floorCount = (this->size + 1) / 2;

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

}
