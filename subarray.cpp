#include<bits/stdc++.h>

using namespace std;

int sub(int a[], int n){

   unordered_set<int> us;

   int pref_sum = 0;

   us.insert(0);

   for(int i =0; i<n;i++){

    pref_sum += a[i];

    if(us.find(pref_sum) != us.end())
        return 1;
     us.insert(pref_sum);
   }
   
 return 0;
}







