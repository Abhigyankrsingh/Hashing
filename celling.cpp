#include <iostream>
#include <climits>

using namespace std;

void findCeil(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int diff = INT_MAX; // Initialize with maximum possible value
        bool found = false;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                diff = min(diff, arr[j] - arr[i]);
                found = true;
            }
        }

        if (!found) {
            cout << "-1" << endl;
        } else {
            cout << (arr[i] + diff) << endl;
        }
    }
}

int main() {
    int arr[] = {4, 6, 2, 10, 3}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    findCeil(arr, size);

    return 0;
}
