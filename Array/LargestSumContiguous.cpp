// #include<iostream>
// using namespace std;

// int maxSubArraySum(int a[], int size)
// {
//    int max_so_far = a[0];
//    int curr_max = a[0];

//    for (int i = 1; i < size; i++)
//    {
//        curr_max = max(a[i], curr_max+a[i]);
//        if(curr_max>max_so_far){
//            max_so_far = curr_max;
//        }
//        if (curr_max<0)
//        {
//            curr_max = 0;
//        }
       
//    }
//    return max_so_far;
// }

// /* Driver program to test maxSubArraySum */
// int main()
// {
//    int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
//    int n = sizeof(a)/sizeof(a[0]);
//    int max_sum = maxSubArraySum(a, n);
//    cout << "Maximum contiguous sum is " << max_sum;
//    return 0;
// }
#include<iostream>
using namespace std;
int maxSubArraySum(int a[], int size){
    int max_so_far = a[0];
    int Curr_max = a [0];

    for (int i = 0; i < size; i++)
    {
        Curr_max = max(a[i],Curr_max+a[i]);
        if (Curr_max > max_so_far)
        {
            max_so_far = Curr_max;
        }
        if (Curr_max < 0)
        {
            Curr_max = 0;
        }
        

        
    }
    return max_so_far;
    
}



int main(){
    int arr[] ={-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr,n);
    cout<<"MAximum contiguous sum is "<<max_sum;
    return 0;
}






// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//           int sum=0;
//         int max=nums[0];
//         for(int i=0;i<nums.size();i++)
//         {
//             sum=sum+nums[i];
//             if(sum>max)
//                 max=sum;
//             if(sum<0)
//                 sum=0;
//         }
//         return max;
//     }
// };
