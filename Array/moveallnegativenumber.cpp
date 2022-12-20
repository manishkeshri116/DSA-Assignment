// #include<iostream>
// using namespace std;

// void rearrange(int arr[], int n){
//     int start = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]< 0)
//         {
//             swap(arr[i],arr[start]);
//             start++;
//         }
        
//     }
    
   
// }

// void printArray(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }



// int main(){
//  int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
//  int n = sizeof(arr)/ sizeof(arr[0]);
//  rearrange(arr, n);
//  printArray(arr,n);
//  return 0;
// }



#include<iostream>
using namespace std;
void rearange(int arr[], int n){
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            swap(arr[i],arr[start]);
            start++;

        }
        
    }
    
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) /sizeof(arr[0]);
    rearange(arr,n);
    printArray(arr,n);
    return 0;
}