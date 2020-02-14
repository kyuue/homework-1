#include "CDiamond.h"

#include "CTriangle.h"

#include "CInvTriangle.h"

#include <iostream>

CDiamond::CDiamond(int shapeSize) : CShape(shapeSize)
{
}

void CDiamond::Draw()
{
	CTriangle Triangle = CTriangle(this->size);

	CInvTriangle InvTriangle = CInvTriangle(this->size);

	Triangle.Draw();

	InvTriangle.Draw();
}
