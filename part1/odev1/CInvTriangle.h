#pragma once

#include "CShape.h"

class CInvTriangle : public CShape
{
public:
	CInvTriangle(int shapeSize);

	void Draw() override;

};