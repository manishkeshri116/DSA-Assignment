// // // // Iterative C++ program to reverse annumay
// // // #include <iostream>
// // // using namespace std;

// // // /* Function to reverse arr[] from start to end*/
// // // void rvereseArray(int arr[], int start, int end)
// // // {
// // // 	if (start >= end)
// // //     return;
     
// // //     int temp = arr[start];
// // //     arr[start] = arr[end];
// // //     arr[end] = temp;
     
// // //     // Recursive Function calling
// // //     rvereseArray(arr, start + 1, end - 1);
// // // }    


// // // /* Utility function to print an array */
// // // void printArray(int arr[], int size)
// // // {
// // // for (int i = 0; i < size; i++)
// // // cout << arr[i] << " ";

// // // cout << endl;
// // // }

// // // /* Driver function to test above functions */
// // // int main()
// // // {
// // // 	int arr[] = {1, 2, 3, 4, 5, 6};
	
// // // 	int n = sizeof(arr) / sizeof(arr[0]);

// // // 	// To print original array
// // // 	printArray(arr, n);
	
// // // 	// Function calling
// // // 	rvereseArray(arr, 0, n-1);
	
// // // 	cout << "Reversed array is" << endl;
	
// // // 	// To print the Reversed array
// // // 	printArray(arr, n);
	
// // // 	return 0;
// // // }


// // 

#include<iostream>
using namespace std;

void reverseArray(int arr[], int s , int e){
    while (s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray (arr , n);
    reverseArray ( arr, 0 ,n-1);

    cout<<"reverse array is "<<endl;

    printArray(arr, n);


    return 0;
}
