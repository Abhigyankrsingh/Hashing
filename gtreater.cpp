#include <iostream>
using namespace std;

void printGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                count++;
            }
        }
        cout << count << endl;
    }
}

int main() {
    int arr[] = {1, 2, 1, 1, 3};
    int n = 5;

    printGreater(arr, n);

    // Print the elements of the array in a single line
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
