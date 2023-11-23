#include<bits/stdc++.h>

using namespace std;




int unioncc(int a[], int b[], int m, int n){


    unordered_set<int>h(a,a+m);

    for(int i=0; i<n;i++){
      h.insert(b[i]);
    }

    return h.size();
}


int main(){

int a[] = {2,2,3,4,3,2};

int m = 6;

int b[] = {2,4,2,7,8,3};

int n = 6;


int unionCount = unioncc(a,b,m,n);

cout << unionCount << endl;

}