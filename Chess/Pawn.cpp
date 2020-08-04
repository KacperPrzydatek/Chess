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

void Move(Square as)
{

}
void Capture()
{

}