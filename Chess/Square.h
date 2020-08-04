#pragma once
#include <iostream>
#include <string>
#include "Piece.h"
class Square
{
//	short int _name_horizontal;
//	short int _name_vertical;
	Piece *_piece;
	bool _occupiedByBlack;
	bool _occupiedByWhite;
public:
	short int _name_horizontal;
	short int _name_vertical;

	Square(short int nameh, short int namev);
	~Square();
	void AddPiece(Piece piece, std::string& actualPlayer);
	Piece MovePieceAway(std::string& actualPlayer);
	void MovePieceInto(Piece* piece, std::string& actualPlayer);
	bool MovePieceThrought();
	std::string Owner();

};

