#include<bits/stdc++.h>
using namespace std;

bool findreduntantbracket(string &s){

stack<char> st;

for (int i = 0; i < s.length(); i++)
{
    char ch = s[i];

    if (ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/')
    {
        st.push(ch);

    }
    else
    {
        //ch ya to ")" hai or lowercase letter

        if (ch == ')')
        {
            bool isReduntant = true;
            while (st.top() != '(')
            {
                char top = st.top();
                if (ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/')
                {
                    isReduntant = false;

                }
                st.pop();

                
            }
            if (isReduntant == true)
            {
            return true;
            st.pop();
            }
            
        }
        
    }
    
}
return false;
}