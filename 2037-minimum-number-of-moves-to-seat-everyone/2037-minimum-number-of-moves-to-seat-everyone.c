#include <stdlib.h>

int compare(const void *a, const void *b);

int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    qsort(seats, seatsSize, sizeof(int), compare);
    qsort(students, studentsSize, sizeof(int), compare);

    int count = 0;
    for (int i = 0; i < seatsSize; i++) {
        count += abs(seats[i] - students[i]);
    }
    return count;
}

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);  
}
