#include "Seats.h"


void reserveSeat(seats seat[10][10], int column, int row) {
	while (true) {
		if (column < 1 || column > 10 || row < 1 || row > 10) {
			std::cout << "Invalid seat number. Please enter a valid column and row: ";
			std::cin >> column >> row;
			continue;
		}
		if (seat[column - 1][row - 1].isReserved) {
			std::cout << "Seat is already reserved. Please choose another seat: ";
			std::cin >> column >> row;
		}
		else {
			seat[column - 1][row - 1].isReserved = true;
			std::cout << "Seat (" << column << " column / " << row << " row) reserved successfully.\n" << std::endl;
			break;
		}
	}
}