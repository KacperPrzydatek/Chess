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

void Move(Square start, Square destination, std::string actualPlayer)
{
	if (start.Owner() != actualPlayer)
	{
		std::cout << "Proba przesuniecia piona przeciwnika. Pawn.cpp,Move";
		std::cout << std::endl << "Sprobuj ponownie wykonac ruch";
		//*actualPlayer sie nie zmienia
	}
	else
	{
		if (destination._name_horizontal - start._name_horizontal != 0)
			std::cout << "Nieprawidlowy ruch. Sprobuj ponownie" << std::endl << "Pawn.cpp, Move";
		else if(destination._name_vertical - start._name_vertical == 1)
		{
			if (destination.Owner() == "empty")
			{
				std::string tmp = start.Owner();
				destination.MovePieceInto(&start.MovePieceAway(actualPlayer), tmp);
			}
			else
				std::cout << "Pole na ktore probujesz sie przemiescic jest zajete. Pawn.cpp,Move"<<std::endl << "Sprobuj ponownie wykonac ruch";
		}
		else if (destination._name_vertical - start._name_vertical == 2)
		{
			if (actualPlayer == "white" && start._name_vertical == 2)
			{
				if (destination.Owner() == "empty")
				{
					std::string tmp = start.Owner();
					destination.MovePieceInto(&start.MovePieceAway(actualPlayer), tmp);
				}
			}
			else if (actualPlayer == "black" && start._name_vertical == 6)
			{
				if (destination.Owner() == "empty")
				{
					std::string tmp = start.Owner();
					destination.MovePieceInto(&start.MovePieceAway(actualPlayer), tmp);
				}
			}
		}

	}
	
}
void Capture(Square start, Square destination, std::string* actualPlayer)
{

}