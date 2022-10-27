#include <stdio.h>

void sortedSquares(int nums [], int size, int new_nums[]) {

    int middle = 0;
    while (nums[middle] < 0) {
        ++middle;
    }

    int neg = middle - 1,
        pos = middle;

    int count = 0;
    int square;

    while (neg >= 0 && pos <= size) {

        if (-1 * nums[neg] <= nums[pos]) {
            square = nums[neg] * nums[neg];
            new_nums[count] = square;
            ++neg;
        }
        else {
            square = nums[pos] * nums[pos];
            new_nums[count] = square;
            --pos;
        }
    }

    while (neg >= 0) {
        square = nums[neg] * nums[neg];
        new_nums[count] = square;
        ++neg;
    }

    while (pos <= size) {
        square = nums[pos] * nums[pos];
        new_nums[count] = square;
        --pos;
    }

}

void Print(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%i ", nums[i]);
    }
}

int main() {
    int a[5] = { -3, -1, 0, 2, 4 };
    int b[5];

    sortedSquares(b, 5, a);

    Print(b, 5);

    return 0;
}
