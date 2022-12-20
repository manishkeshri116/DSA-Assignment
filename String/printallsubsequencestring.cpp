// // Method 1 (Pick and Don’t Pick Concept)  
// // C++ program for the above approach
// #include <bits/stdc++.h>
// using namespace std;

// // Find all subsequences
// void printSubsequence(string input, string output)
// {
// 	// Base Case
// 	// if the input is empty print the output string
// 	if (input.empty()) {
// 		cout << output << endl;
// 		return;
// 	}

// 	// output is passed with including
// 	// the Ist character of
// 	// Input string
// 	printSubsequence(input.substr(1), output + input[0]);

// 	// output is passed without
// 	// including the Ist character
// 	// of Input string
// 	printSubsequence(input.substr(1), output);
// }

// // Driver code
// int main()
// {
// 	// output is set to null before passing in as a
// 	// parameter
// 	string output = "";
// 	string input = "abcd";

// 	printSubsequence(input, output);

// 	return 0;
// }



// Method 3 : 
// One by one fix characters and recursively generates all subsets starting from them. After every recursive call, we remove last character so that the next permutation can be generated. 

// CPP program to generate power set in
// lexicographic order.
#include <bits/stdc++.h>
using namespace std;

// str : Stores input string
// n : Length of str.
// curr : Stores current permutation
// index : Index in current permutation, curr
void printSubSeqRec(string str, int n, int index = -1,
					string curr = "")
{
	// base case
	if (index == n)
		return;

	if (!curr.empty()) {
		cout << curr << "\n";
	}

	for (int i = index + 1; i < n; i++) {

		curr += str[i];
		printSubSeqRec(str, n, i, curr);

		// backtracking
		curr = curr.erase(curr.size() - 1);
	}
	return;
}

// Generates power set in lexicographic
// order.
void printSubSeq(string str)
{
	printSubSeqRec(str, str.size());
}

// Driver code
int main()
{
	string str = "cab";
	printSubSeq(str);
	return 0;
}
