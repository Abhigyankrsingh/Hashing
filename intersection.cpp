#include <bits/stdc++.h>
using namespace std;

int inter(int a[], int b[], int m, int n) {
    unordered_set<int> s;

    for (int i = 0; i < m; i++) {
        s.insert(a[i]);
    }

    int res = 0;

    for (int j = 0; j < n; j++) {
        if (s.find(b[j]) != s.end()) {
            res++;
            s.erase(b[j]);
        }
    }

    return res; // Return the count of intersecting elements
}

int main() {
    int a[] = {1, 2, 2, 3, 4, 5};
    int m = 5;
    int b[] = {1, 2, 3, 4, 3, 3};
    int n = 5;

    int intersectionCount = inter(a, b, m, n);
    cout << "Intersection count: " << intersectionCount << endl;

    return 0;
}
