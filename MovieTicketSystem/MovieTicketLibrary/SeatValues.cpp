#include "SeatValues.h"

void assignSeatValues(Movie& movie) {

	int index = 0, temp;

	std::ifstream filein("TheNotebook.txt");
	if (filein.is_open()) {

		while (filein >> temp) {
			if (temp == 1) {
				movie.reserve(index);
			}
			index++;
		}
		filein.close();
	}
	else {
		std::cout << "Error finding file.";
	}
}