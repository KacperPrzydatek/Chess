#include "Piece.h"


std::ostream& operator<<(std::ostream& os, const Piece& piece)
{
		return os << &piece._name << " owned by" << piece._colour <<std::endl;
}


