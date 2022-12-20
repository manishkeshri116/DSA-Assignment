// #include<iostream>
// using namespace std;


// void sort012(int arr[], int n){
//     int low = 0;
//     int mid = 0;
//     int hig = n-1;

//     while (mid<= hig)
//     {
//      switch(arr[mid]){
//          case 0:
//          swap(arr[low++], arr[mid++]);
//             break;
//         case 1:
//         mid++;
//         break;

//         case 2:
//         swap(arr[mid], arr[hig--]);
//         break;

//      }  
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
//     int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort012(arr,n);
//     cout<<"array after segregation ";
//     printArray(arr,n);
//     return 0;

// }

#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int low = 0 ;
    int mid = 0;
    int hig = n-1;

    while (mid <= hig)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++],arr[mid++]);
            break;
        case 1:
        mid++;
        break;
        case 2:
        swap(arr[mid],arr[hig--]);
        break;
        }
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
int arr [] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
int n = sizeof(arr) / sizeof(arr[0]);

sort012(arr, n);

cout<<"after"<<endl;
printArray(arr,n);


return 0;


}
