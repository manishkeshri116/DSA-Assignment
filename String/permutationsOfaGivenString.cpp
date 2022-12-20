// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

	vector<string> ans;
    	
    	void permute(string &S,int l,int r){
    	    if(l==r){
    	        ans.push_back(S);
    	        return;
    	    }
    	    else
        	    for(int i=l;i<=r;i++){
        	        swap(S[l],S[i]);
        	        permute(S,l+1,r);
        	        swap(S[l],S[i]);
        	    }
    	} 
    	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    int n=S.length();
		    permute(S,0,n-1);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
int main()
{
    string str = "ABC";
    int n = str.size();
    permute(str, 0, n-1);
    return 0;
}
