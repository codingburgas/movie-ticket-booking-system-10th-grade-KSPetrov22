#pragma once
#include <iostream>

struct seats {
	int row;
	bool isReserved;
};

void showSeats(seats seat[10][10]);
void reserveSeat(seats seat[10][10], int column, int row);