// Create one dimensional array for 10 value and replace 5th value with "200"

#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 values: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "position to replace value: ";
    int a;
    cin >> a;

    cout << "Enter the new value: ";
    int b;
    cin >> b;

    arr[a - 1] = b;

    cout << "After replacement: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}