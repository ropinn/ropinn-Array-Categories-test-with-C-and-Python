#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5; // Fixed size known at compile time
    int arr[SIZE];      // Allocated on stack at runtime

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i * 10;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
