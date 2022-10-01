

 TreeNode<int>* takeInputLevelWise() {

                  int rootData;
                  cout << "enter root data"<<endl;
                  cin >> rootData;
                  TreeNode<int>* root = new TreeNode<int>(rootData);

                  queue<TreeNode<int>*> pendingNodes;
                  pendingNodes.push(root);

                  while(pendingNodes.size()  != 0) {

                      TreeNode<int>* front  = pendingNodes.front();
                      pendingNodes.pop();


                      cout << "enter num of child for :" << " " << front->data << endl;
                      int num;
                      cin >> num;


                      for(int i=0;i<num;i++) {
                         int numD;
                         cout << "Enter" <<" " << i <<"th" <<" " <<" child of" << front->data <<endl;
                         cin >> numD;
                         TreeNode<int>*numChild = new TreeNode<int>(numD);
                         front->children.push_back(numChild);
                         pendingNodes.push(numChild);

                      }

                     

                  }

                  return root;


              }
