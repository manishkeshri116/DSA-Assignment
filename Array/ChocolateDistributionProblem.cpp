#include<bits/stdc++.h>
using namespace std;

    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        // Sort the given packets 
        sort(a.begin(),a.end());
		
		long long start = 0,end =0;
		// Largest number of chocolates 
		long long mind = LONG_LONG_MAX;
		
		// Find the subarray of size m such that 
        // difference between last (maximum in case 
        // of sorted) and first (minimum in case of 
        // sorted) elements of subarray is minimum.
		for(long long i=0;i+m-1<n;i++)
		{
			long long diff = a[i+m-1] - a[i];
			if(mind>diff)
			{
				mind = diff;
				start = i;
				end = i+m-1;
			}
		}
		return a[end]-a[start];
            
}
int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "<< findMinDiff(a, n ,m);
    return 0;
}
