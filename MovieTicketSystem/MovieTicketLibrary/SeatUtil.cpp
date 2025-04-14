#include "SeatsUtil.h"

void showSeatsByIndex(int seats[10][10], int index) {
	system("cls");
	for (int i = index; i < index+1; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << "Seat (" << i + 1 << " column / " << j + 1 << " row) - ";
			std::cout << (seats[i][j].isReserved ? "Occupied" : "Available") << "\t";
			if ((j + 1) % 5 == 0) {
				std::cout << std::endl;
			}
		}
		std::cout << std::endl;
	}
}