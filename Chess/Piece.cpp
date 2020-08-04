#include "Piece.h"


std::ostream& operator<<(std::ostream& os, const Piece& piece)
{
	if (piece._colour==0)
		return os << &piece._name << " owned by white"<<std::endl;
	else 
		return os << &piece._name << " owned by white" << std::endl;
}

