#include "Bishop.h"

Bishop::Bishop(std::string colour)
	:_colour(colour), _name("Bishop")
{
#if _DEBUG
	std::cout << "Konstrukcja obiektu typu Piece<Bishop>" << std::endl;
#endif
}

Bishop::Bishop(const Bishop& coppied)
	:_name(coppied._name),_colour(coppied._colour)
{
#if _DEBUG
	std::cout << "Konstrukcja obiektu typu Piece<Bishop> (kopiowanie)" << std::endl;
#endif
}

Bishop::~Bishop()
{
#if _DEBUG
	std::cout << "Destrukcja obiektu typu Piece<Bishop>" << std::endl;
#endif
}

void Bishop::Move(Square start, Square destination, std::string& actualPlayer)
{
	if (start.Owner() != actualPlayer)
	{
		std::cout << "Proba przesuniecia goñca przeciwnika. Bishop.cpp,Move";
		std::cout << std::endl << "Sprobuj ponownie wykonac ruch";
	}
	else
	{
		if (abs(destination._name_horizontal - start._name_horizontal) == abs(destination._name_vertical - start._name_vertical))
		{
			//top-right
			if ((destination._name_vertical - start._name_vertical > 0) && (destination._name_horizontal - start._name_horizontal > 0))
			{
				Square rekStart = start;
			}
			//top-left
			else if ((destination._name_vertical - start._name_vertical > 0) && (destination._name_horizontal - start._name_horizontal < 0))
			{

			}
			//bottom-left
			else if ((destination._name_vertical - start._name_vertical < 0) && (destination._name_horizontal - start._name_horizontal < 0))
			{

			}
			//bottom-right
			else
			{

			}
		}
		else
		{
				std::cout << "Przekroczono zasieg ruchu skoczka. Sprobuj innego ruchu." << std::endl;
		}
	}
}