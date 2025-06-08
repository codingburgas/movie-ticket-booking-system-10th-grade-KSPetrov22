#pragma once
#include <iostream>

class Seats {
private:
    int row;
    bool isReserved;

public:
    Seats() : row(0), isReserved(false) {}
    Seats(int r, bool reserved) : row(r), isReserved(reserved) {}

    int getRow(){
        return row;
    }
    bool getIsReserved(){
        return isReserved; 
    }

    void reserve() {
        isReserved = true; 
    }
    void setRow(int r){ 
        row = r; 
    }
};

void showSeatsByIndex(Seats seats[10][10], int index);
void reserveSeat(Seats seats[10][10], int column, int row);