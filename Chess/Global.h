#pragma once
#include <iostream>

void ChangePlayer(std::string& actualPlayer)
{
	if (actualPlayer == "white")
		actualPlayer = "black";
	else
		actualPlayer = "white";
}

//ZLE. Zrob fcje player
//colour/player - "white"/"black"