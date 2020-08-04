#pragma once
#include <iostream>
#include "Piece.h"
class Square
{
	short int _name_horizontal;
	short int _name_vertical;
	Piece *_piece;
	bool _occupiedByBlack;
	bool _occupiedByWhite;
public:
	Square(short int nameh, short int namev);
	~Square();
	bool actualPlayer; //biale - 0; czarne - 1;
	void AddPiece(Piece piece);
	Piece MovePieceAway();
	void MovePieceInto(Piece* piece);
	bool MovePieceThrought();
	

};

