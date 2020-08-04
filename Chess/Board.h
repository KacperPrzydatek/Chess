#pragma once

#include <vector>
#include "Square.h"
#include "Piece.h"

class Board
{
	std::array<std::array<Square, 8>, 8> _board;

public:
	Board();
	~Board();
	void CheckPosition();
	void StartNormalGame();
	void Start960Game();
};

