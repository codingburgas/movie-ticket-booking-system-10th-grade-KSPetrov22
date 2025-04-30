#include "Menus.h"
#include "Seats.h"

seats seat[10][10]{};
    
void showMainMenu() {
    system("cls");
    for (int i = 0; i < 10; i++) {

        for (int j = 0; j < 10; j++) {
            seat[i][j].row = i + 1;
            if (i % 2 == 0)
                seat[i][j].isReserved = true;
            else
                seat[i][j].isReserved = false;
        }
    }
    std::cout << "Choose what you want to do!\n";
    std::cout << "[1] View movie genres\n";
    std::cout << "[2] Exit\n";
    char choice;
    std::cin >> choice;
    if (choice == '1') {
        ViewGenres();
    }
}

void ActionMovies() {
    std::cout << "Choose an action movie:\n";
    std::cout << "The Matrix [1]\n";
    std::cout << "Mission: Impossible [2]\n";
    std::cout << "Terminator 2: Judgement day [3]\n";
    std::cout << "Go back [4]\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        seatsView(seat);
        break;
    case 2:
        seatsView(seat);
        break;
    case 3:
        seatsView(seat);
        break;
    case 4:
        ViewGenres();
        break;
    default:
        break;
    }
}

void AnimationMovies() {
    system("cls");
    std::cout << "Choose an action movie:\n";
    std::cout << "Toy Story 3 [1]\n";
    std::cout << "Spiderman Across The Spiderverse [2]\n";
    std::cout << "Sonic Movie 3 [3]\n";
    std::cout << "Go back [4]\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        seatsView(seat);
        break;
    case 2:
        seatsView(seat);
        break;
    case 3:
        seatsView(seat);
        break;
    case 4:
        ViewGenres();
        break;
    default:
        break;
    }
}

void RomanceMovies() {
    system("cls");
    std::cout << "Choose an action movie:\n";
    std::cout << "The Notebook [1]\n";
    std::cout << "Pride and Prejudice [2]\n";
    std::cout << "La La Land [3]\n";
    std::cout << "Go back [4]\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        seatsView(seat);
        break;
    case 2:
        seatsView(seat);
        break;
    case 3:
        seatsView(seat);
        break;
    case 4:
        ViewGenres();
        break;
    default:
        break;
    }
}

void ViewGenres() {
    system("cls");
    std::cout << "Choose a genre:\n";
    std::cout << "Action [1]\n";
    std::cout << "Animantion [2]\n";
    std::cout << "Romance [3]\n";
    std::cout << "Go back [4]\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
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
        break;
    }
}

