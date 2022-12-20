// Efficient Approach: The above approach can be optimized in space complexity by traversing the string and checking whether the character at ith index is equal to the character at the (N-i-1)th index for every index in the range [0, N/2]. Follow the steps below to solve the problem:

// Iterate over the range [0, N/2], using the variable i and in each iteration check if the character at index i and N-i-1 are not equal, then print “No” and break.
// If none of the above cases satisfy, then print “Yes“.
// Below is the implementation of the above approach:


// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether string
// is palindrome
string isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return "No";
        }
    }
    // Return "Yes"
    return "Yes";
}
 
// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}