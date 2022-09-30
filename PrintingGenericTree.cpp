//include vector
//using namespace std;



class  TreeNode {
  
  int data;
  vector<TreeNode<int>*> children;
  
  
}



     TreeNode(int data) {
       
       
       this->data = data;
       
       
     }



     void printTree(TreeNode<int>* root) {
       
         if(root == NULL) return;
         cout << " Root Data:" << " " << root->data << endl;
         for(int i  = 0; i<root>children.size();i++)  {
           
             cout << root->children[i]->data << ",";
           
     }
       cout << endl;
       
       for(int i = 0;i<root->children.size();i++)
       {  
           printTree(root->children[i]);
         
       }
       
     }



int main() {
  
  TreeNode<int>* root = new TreeNode<int>(1212);
  
    TreeNode<int>* n1 = new TreeNode<int>(1212);
    TreeNode<int>* n2 = new TreeNode<int>(1212);
    TreeNode<int>* n3 = new TreeNode<int>(1212);
  
  
  root->children.push_back(n1);
  root->children.push_back(n2);
  root->children.push_back(n3);
  
    printTree(root);
  
}

  
  
  


  
  
