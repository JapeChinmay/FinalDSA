
           void printLevelWise(TreeNode<int>* root) {

                  queue<TreeNode<int>*> pendingNodes;
                  pendingNodes.push(root);

                  while(pendingNodes.size() != 0) {

                    TreeNode<int>* front = pendingNodes.front();
                    pendingNodes.pop();

                    cout<< " Data of  front Node:" << " " << front->data << " " << "This front node has :" << " " << front->children.size() << " " << "children" << endl;

                    for(int i =0 ;i<front->children.size();i++) {
                         pendingNodes.push(front->children[i]);
                         cout << "Child data for " << " " << i <<"th child" << " " << front->children[i]->data << endl;

                    }


                  }
           }
