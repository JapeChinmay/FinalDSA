
#include<iostream>

using namespace std;


template<typename T>
class BinaryTreeNode {
  
  
  public :
  
  T data;
  BinaryTreeNode* left;
  BinaryTreeNode* right;
  
  
  BinaryTreeNode(T data) {
    
    this->data = data;
    left = NULL;
    right = NULL:
    
  }
  
  ~BinaryTreeNode() {
    
    delete left;
    delete right;
    
    
  }

  
  void printTree(BinaryTreeNode<int>* root) {
    
       if(root == NULL) return;
    
    
        cout << root->data<< endl;
        if(root->left) cout << "LEFT:" << " "<< root->left->data << endl;
        if(root->right) cout << " RIGHT:" << " " << root->right->data  <<endl;
        printTreee(root->left);
        printTree(root->right);
    
        
    
    
  }
    
  
  
}
  
  int main()
  {
    BinaryTreeNode<int>* root = new binaryTreeNode<int>(1212);
    BinaryTreeNode<int>* n1 = new binaryTreeNode<int>(112423);
    BinaryTreeNode<int>*  n2 = new binaryTreeNode<int>(122323);
    BinaryTreeNode<int>* n3 = new binaryTreeNode<int>(12323);
    
    
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    
    printTree(root);
    
    
    
  }
  
  
  
