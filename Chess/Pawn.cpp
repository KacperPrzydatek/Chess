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
	if (destination._name_horizontal - start._name_horizontal != 0)
		std::cout << "Huston, problem, zalataj problem." << std::endl << "Pawn.cpp, Move";
	if (destination._name_vertical - start._name_vertical != 1)
		std::cout << "Huston, problem, zalataj problem." << std::endl << "Pawn.cpp, Move";
}
void Capture(Square start, Square destination, std::string actualPlayer)
{

}