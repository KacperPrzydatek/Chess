#include "Square.h"



Square::Square(short int nameh, short int namev)
	:_name_horizontal(nameh),_name_vertical(namev),_piece(NULL)
{
	if (nameh < 1 || nameh>8 || namev < 1 || namev>8)
		std::cout << "Tworzysz plansze inna od podstawowej. Komunikat Square.cpp, konstruktor";
	_occupiedByBlack = 0;
	_occupiedByWhite = 0;
}

void Square::AddPiece(Piece piece, std::string colour)
{
	if (_occupiedByBlack == 1 || _occupiedByWhite == 1)
		std::cout << "Pole jest juz zajete. Pole nie ulegnie aktualizacji.";
	else
	{
		if (colour == "white")
		{
			_occupiedByWhite = 1;
			_piece = &piece;
		}
		else if (colour == "black")
		{
			_occupiedByBlack = 1;
			_piece = &piece;
		}
		else
		{
			std::cout << "Podano nieprawidlowy kolor, prosze ponowic dzialanie.";
		}
	}
	
}

Piece Square::MovePieceAway(std::string actualPlayer)
{
	if (_occupiedByWhite == 1 && actualPlayer == "white")
	{
		actualPlayer = "black";
		_occupiedByWhite = 0;
		return *_piece;
		_piece = NULL;
	}
	else if (_occupiedByBlack == 1 && actualPlayer == "black")
	{
		actualPlayer = "white";
		_occupiedByBlack = 0;
		return *_piece;
		_piece = NULL;
	}
	else
	{
		std::cout << "Proba przesuniecia bierki z pola na którym jej nie ma." << std::endl << "Square.cpp;MovePieceAway()";
	}
}
void Square::MovePieceInto(Piece* piece, std::string actualPlayer)
{
	if (_occupiedByWhite == 1 && actualPlayer == "black") //bicie bialego przez czarnego
	{
		actualPlayer = "white";
		_occupiedByWhite = 0;
		_occupiedByBlack = 1;
		_piece = piece;
	}
	else if (_occupiedByBlack == 1 && actualPlayer == "white") //bicie czarnego przez bialego
	{
		actualPlayer = "black";
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

std::string Square::Owner()
{
	if (_occupiedByWhite == 1)
		return "white";
	else if (_occupiedByBlack == 1)
		return "black";
	else
		return "empty";
)
}

Square::~Square()
{
	std::cout << "Jesli widzisz ten komunikat przed koncem gry to jest zle." << std::endl << "Square.cpp;~Square()";
}
