

void preOrder(TreeNode<int>* root)
  
{
     if(root == NULL ) return;
  
     cout << root->data << endl;
  
  
     for(int i =0; i<root->children.size();i++)
       
     {
           preOrder(root->children[i]);
       
       
     }
  
  
       
          
  
    
  
