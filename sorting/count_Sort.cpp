#include <iostream>
#include <climits>
using namespace std;

void countSort(int arr[], int size) {
    int max = INT_MIN; // Corrected to INT_MIN
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int countarray[max + 1]; // Corrected the size of countarray

    for (int i = 0; i <= max; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (i == arr[j]) {
                count++;
            }
        }
        countarray[i] = count;
    }

    for (int i = 1; i <= max; i++) {
        countarray[i] = countarray[i - 1] + countarray[i];
    }

    int arr1[size];
    for (int j = size - 1; j >= 0; j--) {
        int index = arr[j];
        arr1[countarray[index] - 1] = arr[j]; // Corrected the indexing
        countarray[index]--; // Decrementing countarray
    }

    for (int i = 0; i < size; i++) {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[9] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, 9); // Corrected the size passed to countSort
    return 0;
}
