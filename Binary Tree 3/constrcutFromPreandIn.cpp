class Solution{
    public:
    int search(int in[],int start,int end,int cur){
        for(int i=start;i<=end;i++){
            if(in[i]==cur){
                return i;
            }
        }
        return -1;
    }
    
    Node* solve(int in[],int pre[], int n, int &preIdx,int startIn,int endIn)
    {
        if(preIdx>=n || startIn>endIn)
            return NULL;
            
        int element = pre[preIdx++];
        int pos = search(in,startIn, endIn, element);
        
        Node* root = new Node(element);
        
        root->left = solve(in, pre, n ,preIdx, startIn, pos-1);
        root->right = solve(in, pre, n ,preIdx, pos+1, endIn);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preIdx = 0;
        return solve(in, pre, n, preIdx, 0, n-1);
    }
};