// A C++ program to find if
// there is a zero sum subarray
#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
	unordered_set<int> sumSet;

	// Traverse through array
	// and store prefix sums
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];

		// If prefix sum is 0 or
		// it is already present
		if (sum == 0|| sumSet.find(sum)!= sumSet.end())
			return true;

		sumSet.insert(sum);
	}
	return false;
}

// Driver code
int main()
{
	int arr[] = {  2, 3, 1, 6,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (subArrayExists(arr, n))
		cout << "Found a subarray with 0 sum";
	else
		cout << "No Such Sub Array Exists!";
	return 0;

}
// #include<bits/stdc++.h>
// using namespace std;

// bool subArrayExists(int arr[], int n)
//     {
//         //using map to store the prefix sum which has appeared already.
//     	unordered_map<int,bool> sumMap;
    
//     	int sum = 0;
//     	//iterating over the array.
//     	for (int i = 0 ; i < n ; i++)
//     	{
//     	    //storing prefix sum.
//     		sum += arr[i];
    
//     		//if prefix sum is 0 or if it is already present in map then it is
//     		//repeated which means there is a subarray whose summation is 0,
//     		//so we return true.
//     		if (sum == 0 || sumMap[sum] == true)
//     			return true;
            
//             //storing true in map for every prefix sum obtained.
//     		sumMap[sum] = true;
//     	}
//     	//returning false if we don't get any subarray with 0 sum.
//     	return false;
//     }
// int main(){
//     int arr []= {1,2,3,7,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     if (subArrayExists(arr,n))
//     {
//     cout<<"found subarry eith 0 sum ";

//     }
//     else
//     cout<<"no such sub Array ";
//     return 0;

// }