

void printNodesK(TreeNode<int>*root ,int k )
  
{
  
  
  if(root == NULL) return;
  if(k==0){

    cout << root->data <<endl;
    
    return;
    
    
    
  }
  
  for(int i =0;i<root->children.size();i++) {
    
     printNodesK(root->children[i], k-1);
    
  }
  
  
  
  
  
  
  
  
}
