#include "SeatsUtil.h"

void showSeatsByIndex(seats seats[10][10], int index) {
    system("cls");

    std::cout << "Showing seats for row " << index + 1 << ":\n";
    for (int j = 0; j < 10; j++) {
        std::cout << "Seat (" << index + 1 << " column / " << j + 1 << " row) - ";
        std::cout << (seats[index][j].isReserved ? "Occupied" : "Available") << "\t";
        if ((j + 1) % 5 == 0) {
            std::cout << std::endl; 
        }
    }
    std::cout << std::endl;
}

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