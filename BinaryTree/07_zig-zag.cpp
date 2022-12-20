#include<bits/stdc++.h>
using namespace std;
 
 struct Node{
     int data;
     Node* left;
     Node* right;

     Node(int val){
         data = val;
         left = right = NULL;
     }
 };

 class Solution{
     public:

     vector<int> zigZagTraversal(Node* root);

     vector<int> result;

     if(root == NULL){
         return result;

     }
    };