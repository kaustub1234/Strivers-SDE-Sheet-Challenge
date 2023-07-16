void solve(TreeNode<int> * root, int X,int &val){
    if(root==NULL)return;
    if(root->val==X){
        val=root->val;
        return ;
    }

    else if(root->val<X){
        val=root->val;
        solve(root->right,X,val);
    }else{
        solve(root->left,X,val);
    }
}

int floorInBST(TreeNode<int> * root, int X)
{
    int val=INT_MAX;
    solve(root,X,val);
    if(val==INT_MAX)return -1;
    return val;
}