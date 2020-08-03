#pragma once
#include <iostream>
#include "Piece.h"
class Square
{
	std::string _name_horizontal;
	std::string _name_vertical;
	Piece _piece;
	bool _occupied;
public:
	Square(std::string nameh,std::string namev);
	~Square();

	void MovePieceAway();
	void MovePieceInto();

};

