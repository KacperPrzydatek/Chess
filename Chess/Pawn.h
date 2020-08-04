#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
	std::string _name;
	bool _colour; //0 - bialy; 1- czarny
public:
	Pawn(bool colour);
	~Pawn();
	virtual void Move(Square start, Square destination, std::string& actualPlayer) override;
	virtual void Capture(Square start, Square destination, std::string& actualPlayer) override;
};

