#include "Seats.h"
#include "Menus.h"

void seatsView(seats seat[10][10]) {
    showSeatsByIndex(seat, 0);
    int selectedCol;
    while (true) {
        std::cout << "Would you like to view different column [1], book a seat [2] or go back [3]?\n";
        int choice;
        std::cin >> choice;
        if (choice == 1) {
            std::cout << "Select which column you'd like to view [1-10]\n";
            std::cin >> selectedCol;
            selectedCol -= 1;
            showSeatsByIndex(seat, selectedCol);
        }
        if (choice == 2) {
            int column, row;
            std::cout << "Enter the column and row to reserve a seat: ";
            std::cin >> column >> row;
            reserveSeat(seat, column, row);
        }
        if (choice == 3) {
            showMainMenu();
        }
    }
}