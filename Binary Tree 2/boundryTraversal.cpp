class Solution {
public:
    void leftNodes(Node* root, vector<int>& ans)
    {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return;
        
        ans.push_back(root->data);
        if(root->left)
            leftNodes(root->left, ans);
        else
            leftNodes(root->right, ans);
    }
    
    void leafNodes(Node* root, vector<int>& ans)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }
        
        leafNodes(root->left, ans);
        leafNodes(root->right, ans);
    }
    
    void rightNodes(Node* root, vector<int>& ans)
    {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return;
            
        if(root->right)
            rightNodes(root->right, ans);
        else
            rightNodes(root->left, ans);
        
        ans.push_back(root->data);        
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL)
            return ans;
        
        ans.push_back(root->data);   
        leftNodes(root->left, ans);
        
        leafNodes(root->left, ans);
        leafNodes(root->right, ans);
        
        rightNodes(root->right, ans);
        
        return ans;
    }
};