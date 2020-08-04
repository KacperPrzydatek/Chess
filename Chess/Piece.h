#pragma once
#include "Global.h"

class Piece
{
	std::string _name;
	bool _colour; //0 - bialy; 1- czarny
public:
	friend std::ostream& operator<<(std::ostream& os, const Piece& piece);
	virtual void Move();
	virtual void Capture();
};

