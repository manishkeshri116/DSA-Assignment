// class Solution
// {
//     public:
//     //Function to check if opening and closing brackets are of same type.
//     bool cmp(char b,char c)
//     {
//         if(b=='{' && c=='}')
//             return true;
//         else if(b=='[' && c==']')
//             return true;
//         else if(b=='(' && c==')')
//             return true;
//          return false;
//     }
    
//     //Function to check if brackets are balanced or not.
//     bool ispar(string x)
//     {
//         stack<char> s;
        
//         //iterating over the string.
//         for(int i=0;i<x.size();i++)
//         {
//             //if opening bracket is encountered, we push it into stack.
//             if(x[i]=='[' || x[i]=='{' || x[i]=='(')
//                 s.push(x[i]);
            
//             //if closing bracket is encountered, we compare it with top of stack.
//             else if(x[i]==']' || x[i]=='}' || x[i]==')')
//             {
//                 //if top of stack has opening bracket of different
//                 //type, we return false.
//                 if(s.empty() || !cmp(s.top(),x[i])) 
//                     return false;
//                 //else we pop the top element from stack.
//                 else
//                     s.pop();
//             }
//         }
//         //if stack becomes empty, we return true else false.
//         if(s.empty())
//             return true;
//         else
//             return false;
//     }
// };
// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;

// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{  
    stack<char> s;
    char x;

    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++) 
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{') 
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }

        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;

        switch (expr[i]) {
        case ')':
            
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    // Check Empty Stack
    return (s.empty());
}

// Driver code
int main()
{
    string expr = "{()}[]";

    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}

