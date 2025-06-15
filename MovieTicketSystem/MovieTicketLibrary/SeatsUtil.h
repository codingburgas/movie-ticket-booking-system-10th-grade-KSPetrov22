#pragma once
#include <iostream>

class Movie {
private:
    int seatNum[100];
    bool isReserved[100];

public:

    Movie() {
        for (int i = 0; i < 100; ++i) {
            seatNum[i] = i + 1;
            isReserved[i] = false;
        }
    }

    bool getIsReserved(int index) {
        return isReserved[index];
    }

    void reserve(int index) {
        isReserved[index] = true;
    }
};

void showSeatsByIndex(Movie seats, int index);
void reserveSeat(Movie seats, int column, int row);