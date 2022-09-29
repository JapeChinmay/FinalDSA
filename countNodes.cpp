
int countNodes(TreeNode<int>*root)
{
  
  int c = 0;
  if(root == NULL) return 0;
  if(root->children.size() == 0) c++;
  
  for(int i =0 ;i<root->children.size();i++) {
    
    c += countNodes(root->children[i]);
    
  }
  
  return c;
  
  
}
  
