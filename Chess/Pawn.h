#pragma once
#include "Piece.h"
class Pawn :
	public Piece
{
	std::string _name;
	std::string _colour;
public:
	Pawn(std::string colour);
	~Pawn();
	virtual void Move(Square start, Square destination, std::string& actualPlayer) override;
	virtual void Capture(Square start, Square destination, std::string& actualPlayer) override;
};

