#pragma once
#include "Piece.h"
class Knight :
	public Piece
{
	std::string _name;
	std::string _colour;
public:
	Knight(std::string colour);
	~Knight();
	virtual void Move(Square start, Square destination, std::string& actualPlayer) override;
};
