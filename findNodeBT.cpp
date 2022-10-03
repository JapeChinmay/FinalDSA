bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here

     if(root == NULL) return false;
      if(root->data == x) return true;
       
    
    if(root->left) {
        bool ans = isNodePresent(root->left, x);
        if(ans) return true;
        
    }
    
    if(root->right) {
        bool ans1 = isNodePresent( root->right,x);
        if(ans1)return true;
        
    }
    
    
return false;
    
}
