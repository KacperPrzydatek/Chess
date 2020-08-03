#include "Square.h"



Square::Square(std::string nameh, std::string namev)
{
	_name_horizontal = nameh;
	_name_vertical = namev;
	_occupiedByBlack = 0;
	_occupiedByWhite = 0;
}

void Square::MovePieceAway()
{
	if (_occupiedByBlack = 0 && _occupiedByBlack == 0)
	{
		changePlayer = 0;
		std::cout << "Proba przesuniecia bierki z pustego pola."<<std::endl<<"Square.cpp;MovePieceAway()";
	}
	else
	{
		changePlayer = 0;
		_occupied = 0;
	}
}
void Square::MovePieceInto()
{
}
Square::~Square()
{
}
