#include "SeatValues.h"

void assignSeatValues(Movie& movie) {
    int index = 0, temp;

    std::ifstream filein("SeatsData\\The_Notebook.txt");
    if (filein.is_open()) {
        while (filein >> temp) {
            if (index <= 100 && temp == 1) {
                movie.reserve(index);
            }
            index++;
        }
        filein.close();
    }
    else {
        std::cout << "Error finding file: The_Notebook.txt" << std::endl;
    }
}