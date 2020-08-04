#pragma once
#include "Global.h"
#include "Square.h"
class Piece
{
	std::string _name;
	std::string _colour;
public:
	friend std::ostream& operator<<(std::ostream& os, const Piece& piece);
	virtual void Move(Square start, Square destination, std::string* actualPlayer);
	virtual void Capture(Square start, Square destination, std::string* actualPlayer);
};

