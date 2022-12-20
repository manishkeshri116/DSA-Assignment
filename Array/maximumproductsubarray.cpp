#include<bits/stdc++.h>
using namespace std;

long long maxproduct(int *arr,int n){
    long long int maxp = INT_MIN,prod=1;
    for (int i = 0; i < n; i++){
    prod *= arr[i];
    maxp = max(maxp,prod);
    if (prod == 0)
    {
        prod = 1;
    }
    }
    prod= 1;
    for (int i = n; i >= 0; i--)
    {
    prod *= arr[i];
    maxp = max(maxp,prod);
    if (prod == 0)
    {
        prod = 1;
    }
    }
    
 return maxp;
    
}