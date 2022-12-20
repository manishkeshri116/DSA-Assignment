/* Problem Statement
There is a Binary Search Tree (BST) consisting of ‘N’ nodes. Each node of this BST has some integer data.
You are given a pointer to the root node of this BST, and an integer ‘X’. Print "True" if there is a node in BST having data equals to ‘X’, otherwise print "False".
A binary search tree (BST) is a binary tree data structure that has the following properties. */


/* bool searchInBST(BinaryTreeNode<int> *root, int x) {
          //base case
    BinaryTreeNode<int> * temp = root;
    while(temp != NULL){
	if(temp -> data == x){
        return true;
    }
        if(temp -> data > x){
            temp = temp -> left;
            
        }
        else{
            temp = temp -> right;
            
        }
    }
    return false;
} */