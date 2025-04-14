#pragma once
#include <iostream>

struct seats {
	int row;
	bool isReserved;
};

void showSeatsByIndex(seats seats[10][10], int index);

void reserveSeat(seats seat[10][10], int column, int row);