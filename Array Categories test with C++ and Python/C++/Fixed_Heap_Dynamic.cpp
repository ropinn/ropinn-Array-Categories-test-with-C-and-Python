#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int* arr = new int[SIZE]; // Fixed size but allocated on heap

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i * 2;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // Free memory
    return 0;
}
