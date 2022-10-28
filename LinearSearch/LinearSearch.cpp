// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
    srand(time(0));
    int size;
    cout << "Enter size of the array";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << endl;
    }
    int x;
    cout << "Enter a key";
    cin >> x;
    //int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, size, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;

}
