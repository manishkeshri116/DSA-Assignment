#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[], int size)
{
    int i;
    cout << " The repeating element is ";

    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }

    cout << "and the missing element is ";
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}

int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
}

//  class Solution{
// public:
//     int *findTwoElement(int *arr, int n) {
//         int *ans = new int[2], i;
//         for (i = 0; i < n; i++) {
//             if (arr[abs(arr[i]) - 1] > 0)
//                 arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
//             else
//                 ans[0] = abs(arr[i]);
//         }
//         for (i = 0; i < n; i++) {
//             if (arr[i] > 0) ans[1] = i + 1;
//         }
//         return ans;
//     }
// };