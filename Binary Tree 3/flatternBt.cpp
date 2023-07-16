#include <bits/stdc++.h>
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    TreeNode<int>* curr = root;
    while(curr != NULL){
        if(curr->left == NULL){
            curr = curr->right;
        }
        else{
            TreeNode<int>* pred = curr->left;
            while(pred->right != NULL){
                pred = pred->right;
            } 
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
            curr = curr->right;
        }
    }
    return root;
}