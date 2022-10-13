#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool circularLL(Node* head)
{
    // Write your code here
    if(head == NULL) return 1;
    Node* temp = head->next;
    
    while(temp != head && temp!=NULL) {
         temp = temp->next;
        
    }
    if(head == temp) return 1;
    else return 0;
    
}
