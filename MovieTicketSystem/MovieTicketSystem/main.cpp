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
    seatsView(seat);
 }