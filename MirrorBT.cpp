 
 
 void Mirror(BinaryTree<int>* root) {
 if(!root)
       return;
    BinaryTreeNode<int>* temp=root->left;
    
    root->left=root->right;
    root->right=temp;
    
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    
    }
    
