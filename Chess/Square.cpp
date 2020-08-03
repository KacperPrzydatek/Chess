#include "Square.h"



Square::Square(std::string nameh, std::string namev)
{
	_name_horizontal = nameh;
	_name_vertical = namev;
	_occupiedByBlack = 0;
	_occupiedByWhite = 0;
}

void Square::AddPiece(Piece piece)
{

}

Piece Square::MovePieceAway()
{
	if (_occupiedByWhite == 1 && actualPlayer == 0)
	{
		actualPlayer = 1;
		_occupiedByWhite = 0;
		return *_piece;
		_piece = NULL;
	}
	else if (_occupiedByBlack == 1 && actualPlayer == 1)
	{
		actualPlayer = 0;
		_occupiedByBlack = 0;
		return *_piece;
		_piece = NULL;
	}
	else
	{
		std::cout << "Proba przesuniecia bierki z pola na którym jej nie ma." << std::endl << "Square.cpp;MovePieceAway()";
	}
}
void Square::MovePieceInto(Piece* piece)
{
	if (_occupiedByWhite == 1 && actualPlayer == 1) //bicie bialego przez czarnego
	{
		actualPlayer = 0;
		_occupiedByWhite = 0;
		_occupiedByBlack = 1;
		_piece = piece;
	}
	else if (_occupiedByBlack == 1 && actualPlayer == 0) //bicie czarnego przez bialego
	{
		actualPlayer = 0;
		_occupiedByBlack = 0;
		_occupiedByWhite = 1;
		_piece = piece;
	}
	else
	{
		std::cout << "Proba przesuniecia bierki z pola na którym jej nie ma." << std::endl << "Square.cpp;MovePieceAway()";
	}
}

bool Square::MovePieceThrought()
{
	if (_occupiedByWhite == 1 || _occupiedByBlack == 1)
		return 0;
	else return 1;
}
Square::~Square()
{
	std::cout << "Jesli widzisz ten komunikat przed koncem gry to jest zle." << std::endl << "Square.cpp;~Square()";
}
