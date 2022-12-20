#include<iostream>
#include<algorithm>
using namespace std;

    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int maximum,minimum,ans;
        ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
                maximum =  max(arr[i-1]+k,arr[n-1]-k);
                minimum = min(arr[0]+k,arr[i]-k);
                ans = min(ans,maximum-minimum);
            }
        }
        return ans;
    };

int main(){

    int arr[] = {1, 5, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout << getMinDiff(arr, n, k);
    return 0;
    

}