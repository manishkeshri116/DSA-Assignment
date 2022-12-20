#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BInaryTreeNode{
    public:
    T data;
    BInaryTreeNode<T> *left;
    BInaryTreeNode<T> *right;

    BInaryTreeNode(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

void inorder(BInaryTreeNode <int> *root,int &count){
    //base case
    if (root == NULL)
    {
        return ;
    }
    inorder(root -> left ,count);

    //leaf node
    if(root -> left  == NULL && root -> right == NULL){
        count ++;
    }
    inorder(root -> right ,count);
}

int noOfLeafNodes(BInaryTreeNode<int> *root){
    int cnt = 0;
    inorder(root , cnt);
    return cnt;
}

