#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size]; // Stack dynamic (Variable Length Array - allowed in some compilers)

    for (int i = 0; i < size; i++) {
        arr[i] = i * 5;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
