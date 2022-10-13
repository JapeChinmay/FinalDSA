#include<iostream>

using namespace std;

class Node {

    public:


     int data;
     Node* next;

     Node(int data) {
         this->data = data;
         this->next = NULL;

     }

     ~Node() {
         int val = this->data;
         if(this->next != NULL) {
             delete next;
             next = NULL;

         }
     }

};


 void insertNode(Node* &tail, int data, int e) { 

       
       // empty list

       if(tail == NULL) {

        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;

          
       } else {
          
              // non-empty list
              Node* curr = tail;
              while(curr->data != e) {
                 curr  = curr->next;

              }
                // e found
                 
                   Node* temp= new Node(data);
                   temp->next = curr->next;
                   curr->next = temp;


       }



       

                      

        
       
 }

   void print(Node* &tail) {
      
        Node* temp = tail;

        do {
             cout << tail->data << " ";
             tail = tail->next;
        }while(tail != temp);


            cout << endl;
        

        


       
   }

   void deleteNode(Node*tail, int e) {
     
          if(tail  == NULL) {
              cout << " empty" << endl;
              return;

          }else {

              // non empty

                 Node* prev = tail;
                 Node* curr = prev->next;
                 while(curr->data  != e) {
                     prev = curr;
                     curr = curr->next;

                 }

                 
                      prev->next = curr->next;
                      if(tail == curr) tail = prev;

                      curr->next = NULL;
                      delete curr;
                 
            
          }
   }




int main() {

    Node* tail  =  NULL;
    insertNode(tail, 45, 3);
    insertNode(tail, 11,45);
    insertNode(tail,3,45);
    deleteNode(tail,45);


    print(tail);

      
       
}
