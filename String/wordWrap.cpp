// C++ program for space optimized
// solution of Word Wrap problem.

#include <bits/stdc++.h>
using namespace std;

// Function to find space optimized
// solution of Word Wrap problem.
void solveWordWrap(int arr[], int n, int k)
{
    int i, j;

    // Variable to store number of
    // characters in given line.
    int currlen;

    // Variable to store possible
    // minimum cost of line.
    int cost;

    // DP table in which dp[i] represents
    // cost of line starting with word
    // arr[i].
    int dp[n];

    // Array in which ans[i] store index
    // of last word in line starting with
    // word arr[i].
    int ans[n];

    // If only one word is present then
    // only one line is required. Cost
    // of last line is zero. Hence cost
    // of this line is zero. Ending point
    // is also n-1 as single word is
    // present.
    dp[n - 1] = 0;
    ans[n - 1] = n - 1;

    // Make each word first word of line
    // by iterating over each index in arr.
    for (i = n - 2; i >= 0; i--) {
        currlen = -1;
        dp[i] = INT_MAX;

        // Keep on adding words in current
        // line by iterating from starting
        // word upto last word in arr.
        for (j = i; j < n; j++) {

            // Update number of characters
            // in current line. arr[j] is
            // number of characters in
            // current word and 1
            // represents space character
            // between two words.
            currlen += (arr[j] + 1);

            // If limit of characters
            // is violated then no more
            // words can be added to
            // current line.
            if (currlen > k)
                break;

            // If current word that is
            // added to line is last
            // word of arr then current
            // line is last line. Cost of
            // last line is 0. Else cost
            // is square of extra spaces
            // plus cost of putting line
            // breaks in rest of words
            // from j+1 to n-1.
            if (j == n - 1)
                cost = 0;
            else
                cost = (k - currlen) * (k - currlen) + dp[j + 1];

            // Check if this arrangement gives
            // minimum cost for line starting
            // with word arr[i].
            if (cost < dp[i]) {
                dp[i] = cost;
                ans[i] = j;
            }
        }
    }

    // Print starting index and ending index
    // of words present in each line.
    i = 0;
    while (i < n) {
        cout << i + 1 << " " << ans[i] + 1 << " ";
        i = ans[i] + 1;
    }
}

// Driver function
int main()
{
    int arr[] = { 3, 2, 2, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int M = 6;
    solveWordWrap(arr, n, M);
    return 0;
}


// int solveWordWrap(vector<int>nums, int k) 
//     { 
// int n=nums.size();
//         int dp[n];
//         int sum=0;
//         dp[n-1]=0;
//         for(int i=n-2;i>=0;i--)
//         {
//             int cl=-1;
//             dp[i]=INT_MAX;
//             for(int j=i;j<n;j++)
//             {
//                 cl+=(nums[j]+1);
//                 if(cl>k)
//                 break;
//                 if(j==n-1)
//                 sum=0;
//                 else
//                 sum=(k-cl)*(k-cl)+dp[j+1];
//                 dp[i]=min(dp[i],sum);
//             }
//         }
//         return dp[0];
//     } 