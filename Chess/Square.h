#pragma once
#include <iostream>
#include "Piece.h"
class Square
{
	std::string _name_horizontal;
	std::string _name_vertical;
	Piece *_piece;
	bool _occupiedByBlack;
	bool _occupiedByWhite;
public:
	Square(std::string nameh,std::string namev);
	~Square();
	bool actualPlayer; //biale - 0; czarne - 1;
	void AddPiece(Piece piece);
	Piece MovePieceAway();
	void MovePieceInto(Piece* piece);
	bool MovePieceThrought();
	

};

