#include "Knight.h"
Knight::Knight(std::string colour)
	:_colour(colour), _name("Knight")
{
#if _DEBUG
	std::cout << "Konstrukcja obiektu typu Piece<Knight>" << std::endl;
#endif
}

Knight::~Knight()
{
#if _DEBUG
	std::cout << "Destrukcja obiektu typu Piece<Knight>" << std::endl;
#endif
}

void Knight::Move(Square start, Square destination, std::string& actualPlayer)
{
	if (start.Owner() != actualPlayer)
	{
		std::cout << "Proba przesuniecia skoczka przeciwnika. Knight.cpp,Move";
		std::cout << std::endl << "Sprobuj ponownie wykonac ruch";
	}
	else 
	{
		if (abs(start._name_horizontal - destination._name_horizontal) + abs(start._name_vertical - destination._name_vertical) == 3 && start._name_horizontal - destination._name_horizontal != 0)
		{
			if (destination.Owner() == "empty")
			{
				MakeMove(start, destination, actualPlayer);
				std::cout << "Wykonano ruch skoczkiem." << std::endl;
			}
			else if (destination.Owner != actualPlayer)
			{
				MakeMove(start, destination, actualPlayer);
				std::cout << "Wykonano bicie skoczkiem." << std::endl;
			}
			else
				std::cout << "Proba wejscia na pole opanowane przez wlasna figure. Sprobuj innego ruchu." << std::endl;
		}
		else
		{
			std::cout << "Przekroczono zasieg ruchu skoczka. Sprobuj innego ruchu." << std::endl;
		}
	}
}