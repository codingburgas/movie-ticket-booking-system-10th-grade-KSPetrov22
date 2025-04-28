#include "Menus.h"
#include "Seats.h"

void showMainMenu() {

    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
            seat[i][j].row = i + 1;
            if (i % 2 == 0)
                seat[i][j].isReserved = true;
            else
                seat[i][j].isReserved = false;
        }
    }
    std::cout << "Hey choose what you want to do dumbass!\n";
    std::cout << "[1] Book seats\n";
    std::cout << "[2] Exit\n";
    char choice;
    std::cin >> choice;
    if (choice == '1') {
        seatsView(seat);
    }
}