void connectNodes(BinaryTreeNode< int > *root) {
    if (root==NULL)return ; 
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
       while(size--) {
          BinaryTreeNode<int> *node = q.front();
          q.pop();
          node->next=size?q.front():NULL; //check if the size of the queue is not 0 then node->next is q.front else NULL
          if (node->left)              //chek for the left node if exist put in queue
            q.push(node->left);       
          if (node->right)            // check for the right node if exist put in queue
            q.push(node->right);       
        }
    }
}