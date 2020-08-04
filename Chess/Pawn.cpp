#include "Pawn.h"



Pawn::Pawn(bool colour)
	:_colour(colour), _name("Pawn")
{
#if _DEBUG
	std::cout << "Konstrukcja obiektu typu Piece<Pawn>" << std::endl;
#endif
}


Pawn::~Pawn()
{
#if _DEBUG
	std::cout << "Destrukcja obiektu typu Piece<Pawn>" << std::endl;
#endif
}

void Move(Square start, Square destination, std::string* actualPlayer)
{
	if (start.Owner() != *actualPlayer)
	{
		std::cout << "Proba przesuniecia piona przeciwnika. Pawn.cpp,Move";
		std::cout << std::endl << "Sprobuj ponownie wykonac ruch";
		//*actualPlayer sie nie zmienia
	}
	else
	{
		if (destination._name_horizontal - start._name_horizontal != 0 || destination._name_vertical - start._name_vertical != 1)
			std::cout << "Nieprawidlowy ruch. Sprobuj ponownie" << std::endl << "Pawn.cpp, Move";
		else
		{
			start.MovePieceAway(actualPlayer)
		}

	}
	
}
void Capture(Square start, Square destination, std::string* actualPlayer)
{

}