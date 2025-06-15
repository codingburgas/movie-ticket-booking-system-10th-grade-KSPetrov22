#include "Menus.h"
#include "../MovieTicketLibrary/SeatsUtil.h"
#include "../MovieTicketLibrary/SeatValues.h"
#include "Seats.h"

Movie seat;

void showMainMenu() {
    system("cls");

    std::cout << "Choose what you want to do!\n";
    std::cout << "[1] View movie genres\n";
    std::cout << "[2] Exit\n";

    char choice;
    std::cin >> choice;

    if (choice == '1') {
        ViewGenres();
    }
    else {
        exit(0);
    }
}

void ActionMovies() {
    system("cls");
    std::cout << "Choose an action movie:\n";
    std::cout << "The Matrix [1]\n";
    std::cout << "Mission: Impossible [2]\n";
    std::cout << "Terminator 2: Judgement Day [3]\n";
    std::cout << "Go back [4]\n";

    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
    case 2:
    case 3:
        seatsView(seat);
        break;
    case 4:
        ViewGenres();
        break;
    default:
        std::cout << "Invalid choice.\n";
        break;
    }
}

void AnimationMovies() {
    system("cls");
    std::cout << "Choose an animation movie:\n";
    std::cout << "Toy Story 3 [1]\n";
    std::cout << "Spiderman: Across the Spider-Verse [2]\n";
    std::cout << "Sonic Movie 3 [3]\n";
    std::cout << "Go back [4]\n";

    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
    case 2:
    case 3:
        seatsView(seat);
        break;
    case 4:
        ViewGenres();
        break;
    default:
        std::cout << "Invalid choice.\n";
        break;
    }
}

void RomanceMovies() {
    system("cls");
    std::cout << "Choose a romance movie:\n";
    std::cout << "The Notebook [1]\n";
    std::cout << "Pride and Prejudice [2]\n";
    std::cout << "La La Land [3]\n";
    std::cout << "Go back [4]\n";

    Movie The_Notebook;
    assignSeatValues(The_Notebook);

    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
        seatsView(The_Notebook);
        break;
    case 2:
    case 3:
    case 4:
        ViewGenres();
        break;
    default:
        std::cout << "Invalid choice.\n";
        break;
    }
}

void ViewGenres() {
    system("cls");
    std::cout << "Choose a genre:\n";
    std::cout << "Action [1]\n";
    std::cout << "Animation [2]\n";
    std::cout << "Romance [3]\n";
    std::cout << "Go back [4]\n";

    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
        ActionMovies();
        break;
    case 2:
        AnimationMovies();
        break;
    case 3:
        RomanceMovies();
        break;
    case 4:
        showMainMenu();
        break;
    default:
        std::cout << "Invalid choice.\n";
        break;
    }
}