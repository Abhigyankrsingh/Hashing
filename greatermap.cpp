#include<bits/stdc++.h>

using namespace std;


void printg(int arr[], int n){
    map<int,int> m;

    // Count the frequency of each element in the array
    for(int i = 0; i < n; i++){
        m[arr[i]]++; // Increment the frequency of arr[i] in the map
    }

    int cum_freq = 0;

    // Calculate cumulative frequencies
    for(auto it = m.begin(); it != m.end(); it++){
        int freq = it->second;
        it->second = cum_freq;
        cum_freq += freq;
    }

    // Print the cumulative frequencies of each element in the array
    for(int i = 0; i < n; i++){
        cout << m[arr[i]] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 1, 1, 3};
    int n = 5;

    printg(arr, n);

    // Print the elements of the array in a single line
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
