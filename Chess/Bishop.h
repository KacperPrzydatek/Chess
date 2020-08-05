#pragma once
#include "Piece.h"
class Bishop :
	public Piece
{
	std::string _name;
	std::string _colour;

public:
	Bishop(std::string colour);
	Bishop(const Bishop& coppied);
	~Bishop();
	virtual void Move(Square start, Square destination, std::string& actualPlayer) override;
	virtual void Capture(Square start, Square destination, std::string& actualPlayer) override;
};

