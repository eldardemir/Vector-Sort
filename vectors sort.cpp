#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n ;
    cin>>n;
   vector<int>number(n,0);
   for(int i=0;i<n;i++){
       cin>>number[i];
   }
   sort(number.begin(),number.end());
   for(int i=0;i<n;i++){
       cout<<number[i]<<" ";
   }


    return 0;
}
