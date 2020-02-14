#include "CInvTriangle.h"

#include <iostream>

CInvTriangle::CInvTriangle(int shapeSize) : CShape(shapeSize)
{
}

void CInvTriangle::Draw()
{

	if (this->size < 3 || this->size % 2 == 0) return;

	int floorCount = (this->size + 1) / 2;

	for (int i = floorCount; i >= 1; i--)
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
