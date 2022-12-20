// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// // Function to return minimum number of jumps to end of array


//     int minJumps(int arr[], int n){
//         int jump=0;
//         int max1=0;
//         int reach=0;
//         for(int i=0;i<n-1;i++){
//             if(i+arr[i]>max1){
//                 max1=i+arr[i];
//             }
//             if(i==reach){
//                 jump++;
//                 reach=max1;
//             }
//             if(arr[i]==0 && i==max1){
//                 return -1;
//             }
//         }
//         return jump;
//         // Your code here
//     }



// // { Driver Code Starts.

// int main()
// {
//   int arr[] = { 1, 3, 6, 3, 2,
//                   3, 6, 8, 9, 5 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Minimum number of jumps to";
//     cout << " reach the end is " << minJumps(arr, n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
        int jump=0;
        int max1=0;
        int reach=0;
        for(int i=0;i<n-1;i++){
            if(i+arr[i]>max1){
                max1=i+arr[i];
            }
            if(i==reach){
                jump++;
                reach=max1;
            }
            if(arr[i]==0 && i==max1){
                return -1;
            }
        }
        return jump;
        // Your code here
    }



int main(){
    int arr[] = { 1, 3, 6, 3, 2,
                 3, 6, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
cout << "Minimum number of jumps to";
cout << " reach the end is " << minJumps(arr, n);    return 0;

}