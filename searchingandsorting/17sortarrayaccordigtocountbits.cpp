// C++ program to sort an array according to
// count of set bits using std::sort()
#include <bits/stdc++.h>
using namespace std;

// a utility function that returns total set bits
// count in an integer
int countBits(int a)
{
	int count = 0;
	while (a)
	{
		if (a & 1 )
			count+= 1;
		a = a>>1;
	}
	return count;
}

// Function to sort according to bit count
// This function assumes that there are 32
// bits in an integer.
void sortBySetBitCount(int arr[],int n)
{
	vector<vector<int> > count(32);
	int setbitcount = 0;
	for (int i=0; i<n; i++)
	{
		setbitcount = countBits(arr[i]);
		count[setbitcount].push_back(arr[i]);
	}

	int j = 0; // Used as an index in final sorted array

	// Traverse through all bit counts (Note that we
	// sort array in decreasing order)
	for (int i=31; i>=0; i--)
	{
		vector<int> v1 = count[i];
		for (int i=0; i<v1.size(); i++)
			arr[j++] = v1[i];
	}
}

// Utility function to print an array
void printArr(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortBySetBitCount(arr, n);
	printArr(arr, n);
	return 0;
}
