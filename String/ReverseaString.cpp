#include<bits/stdc++.h>
using namespace std;



    void reverseStr(string& str) {
        int st = 0;
        int e = str.size()-1;
        while(st<e){

        swap(str[st++],str[e--]);
        }
    }

int main(){
    
 string str = "manish";
    reverseStr(str);
    cout << str;
    return 0;
}

// // A quickly written program for reversing a string
// // using reverse()
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string str = "geeksforgeeks";

// 	// Reverse str[begin..end]
// 	reverse(str.begin(), str.end());

// 	cout << str;
// 	return 0;
// }
