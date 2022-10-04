

bool SearchBST(TreeNode<int>* root, int k) {

      if(root == NULL) return false;
      
      if(root->data == k) return true;
      
      if(root->data > k) return SearchBST(root->left,k);
      if(root->data < k) return SearchBST(root->right,k);

       
}
