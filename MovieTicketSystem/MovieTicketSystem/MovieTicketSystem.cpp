#include <iostream>
#include <string>

struct seats {
	int row;
	bool isReserved;
};

void showSeats(seats seat[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << "Seat (" << i + 1 << " column / " << j + 1 << " row) - ";
			std::cout << (seat[i][j].isReserved ? "Occupied" : "Available") << "\t";
			if ((j + 1) % 5 == 0) {
				std::cout << std::endl;
			}
		}
		std::cout << std::endl;
	}
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

int main() {

	seats seat[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			seat[i][j].row = i + 1;
			if (i % 2 == 0)
				seat[i][j].isReserved = true;
			else
				seat[i][j].isReserved = false;
		}
	}

	showSeats(seat);

	int column, row;
	std::cout << "Enter the column and row to reserve a seat: ";
	std::cin >> column >> row;
	reserveSeat(seat, column, row);

	showSeats(seat);
}