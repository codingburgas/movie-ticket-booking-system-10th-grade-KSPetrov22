#include "SeatsUtil.h"

void showSeatsByIndex(Movie movie, int index) {
    system("cls");

    std::cout << "Showing seats for row " << index + 1 << ":\n";
    
    if (index == 0) {
        for (int i = 0; i < 10; i++) {
            std::cout << "Seat ( 1 row / " << i + 1 << " column) - ";
            std::cout << (movie.getIsReserved(index) ? "Occupied" : "Available") << "\t";
            if ((i + 1) % 5 == 0) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
    }
    else {
        for (int j = 0; j < 10; j++) {
            std::cout << "Seat (" << index + 1 << " row / " << j + 1 << " column) - ";
            std::cout << (movie.getIsReserved((index * 10) + j) ? "Occupied" : "Available") << "\t";
            if ((j + 1) % 5 == 0) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
    }
}


void reserveSeat(Movie movie, int column, int row) {
    while (true) {
        if (column < 1 || column > 10 || row < 1 || row > 10) {
            std::cout << "Invalid seat number. Please enter a valid column and row: ";
            std::cin >> column >> row;
            continue;
        }

        if (movie.getIsReserved((row - 1) * 10 + (column - 1))) {
            std::cout << "Seat is already reserved. Please choose another seat: ";
            std::cin >> column >> row;
        }
        else {
            movie.reserve((row - 1) * 10 + (column - 1));
            std::cout << "Seat is successfully reserved!";
            break;
        }
    }
}