int solve(BinaryTreeNode<int> *root,int &i, int k){
    if (root == NULL)
    {
        return -1;
    }
    //l 
    int left = solve(root -> left , i,k);
    if (left != -1)
    {
        return left;
    }
    //n
    i++;

    if (i = k)
    return root -> data;
    //R
    return solve(root -> right , i,k);

    
    
    
}

int KthSmallest (BinaryTreeNode <int> *root, int &i, int K){
    int i = 0;
    int ans = solve(root ,i ,k );
    return ans;
}



