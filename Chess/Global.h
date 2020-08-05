#pragma once
#include <iostream>
class Square;
void ChangePlayer(std::string& actualPlayer)
{
	if (actualPlayer == "white")
		actualPlayer = "black";
	else
		actualPlayer = "white";
}

void MakeMove(Square& start, Square& destination, std::string actualPlayer)
{
	std::string tmp = start.Owner();
	destination.MovePieceInto(&start.MovePieceAway(actualPlayer), tmp);
	ChangePlayer(actualPlayer);
}

//ZLE. Zrob fcje player
//colour/player - "white"/"black"