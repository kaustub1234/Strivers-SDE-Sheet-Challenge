    int predecessor(BinaryTreeNode<int> *root, int key)
    {
        int pred = -1;
        while (root != NULL)
        {
            if (key <= root->data)
            {
                root = root->left;
            }
            else
            {
                pred = root->data;
                root = root->right;
            }
        }
        return pred;
    }

    int successor(BinaryTreeNode<int> *root, int key)
    {
        int succ = -1;
        while (root != NULL)
        {
            if (key >= root->data)
            {
                root = root->right;
            }
            else
            {
                succ = root->data;
                root = root->left;
            }
        }
        return succ;
    }

    pair<int, int> predecessorSuccessor(BinaryTreeNode<int> *root, int key)

    {
        pair<int, int> v;
        v.first = predecessor(root, key);
        v.second = successor(root, key);
        return v;
    }