#pragma once
#include <iostream>

class Movie {
private:
    int seatNum[100];
    bool isReserved[100];

public:

    bool getIsReserved(){
        return isReserved; 
    }

    void reserve(int index) {
        isReserved[index] = true;
    }
};

void showSeatsByIndex(Movie seats[10][10], int index);
void reserveSeat(Movie seats[10][10], int column, int row);