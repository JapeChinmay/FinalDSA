#include<queue>

BinaryTree<int>* takeInputLevelWise() {
  
      int rootData;
      cout << "Enter Root Data << endl;
        
       cin >> rootData;
      if(rootData == -1 )  {
        
         return NULL;
        
        
      }
  
  
   BinaryTree<int>* root = new BinaryTree<int>(rootData);
   queue<BinaryTree<int>*> pendingNodes;
   pendingNodes.push(root);
  
  
  while(pendingNodes != 0) {
  
   BinaryTree<int>* front = pendingNodes.front();
   int leftC;
    cout << "enter left child for :" << " " << front->data << endl;
    cin >> leftC;
    
    if(leftC != -1) {
    
    BinaryTree<int>* child = new BinaryTree<int>(leftC);
    
    root->left = child;
    pendingNodes.push(child);
      
      
      
      }
    
    
     cout << "enter Right child for:" << " " << front->data << endl;
        int rightCD;
        cin >> rightCD;
        if(rightCD != -1) {
            BinaryTree<int>* child =  new BinaryTree<int>(rightCD);

            front->right = child;
            pendingNodes.push(child);
        }
    
     
     
    }
  
  return root;
  
  
}
  
     
         
       
