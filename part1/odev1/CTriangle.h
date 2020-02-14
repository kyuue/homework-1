#pragma once

#include "CShape.h"

class CTriangle : public CShape
{
public:
	CTriangle(int shapeSize);
	
	virtual void Draw() override;

};