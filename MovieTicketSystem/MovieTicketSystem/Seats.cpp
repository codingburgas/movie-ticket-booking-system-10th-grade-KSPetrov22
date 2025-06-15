#include "Seats.h"
#include "Menus.h"

void seatsView(Movie movie) {
    showSeatsByIndex(movie, 0);
    int selectedRow;

    while (true) {
        std::cout << "Would you like to view different row [1], book a seat [2] or go back [3]?\n";
        int choice;
        std::cin >> choice;
        if (choice == 1) {
            std::cout << "Select which row you'd like to view [1-10]\n";
            std::cin >> selectedRow;
            selectedRow -= 1;
            showSeatsByIndex(movie, selectedRow);
        }
        if (choice == 2) {
            int column, row;
            std::cout << "Enter the row and column to reserve a seat: ";
            std::cin >> row >> column;
            reserveSeat(movie, row, column);
        }
        if (choice == 3) {
            showMainMenu();
        }
    }
}