	for (i = n - 1; i >= 0; i--) {
		prod[i] *= temp;
		temp *= arr[i];
	}

	/* print the constructed prod array */
	for (i = 0; i < n; i++)
		cout << prod[i] << " ";

	return;
}

// Driver Code
int main()
{
	int arr[] = { 10, 3, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The product array is: \n";
	productArray(arr, n);
}

// This code is contributed by rathbhupendra
