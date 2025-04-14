#include <iostream>
#include <string>
#include "Seats.h"
#include "../MovieTicketLibrary/SeatsUtil.h"

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
    while (true) {
        std::cout << "Select row of seats to show (1-10)\n";
        int selectedRow;
        std::cin >> selectedRow;
        showSeatsByIndex(seat, selectedRow);    

        int column, row;
        std::cout << "Enter the column and row to reserve a seat: ";
        std::cin >> column >> row;
        reserveSeat(seat, column, row);

    }
}