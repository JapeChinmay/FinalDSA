

BinaryTree<int>* takeInput(){
    int rootD;
     cout << "Enter Root Data:" << endl;
     cin >> rootD;
     if(rootD == -1) {
       
       
       BinaryTree<int>* root =  new BinaryTree<int>(rootD);
       
       BinaryTree<int>* leftC =  takeInput();
       
       BinaryTree<int>* rightC = takeInput();
       
       root->left = leftC;
       root->right = rightC;
       return root;
       
       
  
}
  
  
  int main () {
    
    
    
    BinaryTree<int>* root = takeInput();
    
