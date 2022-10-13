#include<iostream>
using namespace std;

class Doubly {

    public:
     int data;
     Doubly* prev;
     Doubly* next;


     Doubly(int data) {
         this->data = data;
         this->prev = NULL;
         this->next = NULL;

     }

     ~Doubly() {
         int val = this->data;
         if(next != NULL) {
             delete next;
             next=  NULL;

         }
     }



};

//printing
void print(Doubly* head) {
     Doubly* temp = head;
     while(temp!=NULL) {
         cout << temp->data << " ";
         temp = temp->next;

     } cout << endl;

}

void takeIN(Doubly* &head, ind d){

      if(head == NULL) {
         Doubly*temp = new Doubly(d);
         head=  temp;
      }
      else {
      Doubly* temp = new Doubly(d);
      temp->next = head;
      head->prev = temp;
      head=  temp;

      }

}

void InsertAtTail(Doubly* tail, int d) {

      if(tail == NULL) {
        Doubly*temp = new Doubly(d);

        tail = temp;

      }

      else {
     Doubly* temp = new Doubly(d);
     tail->next = temp;
     temp->prev = tail;

     tail = temp;

      }


}

void insertAtPos(Doubly* head, int pos, int d) {
      // at start
      if(pos == 1) {
         takeIN(head, d);
      }

      Doubly* temp  =  head;
      int c  =1;

      while(c < pos-1) {
         temp = temp->next;
         c++;
      }
      //at end
      if(temp->next == NULL) {
         InsertAtTail(tail,d);
         return;
      }


      Doubly* node = new Doubly(d);
      node->next = temp->next;
      temp->next->prev = node;
      temp->next = node;
      node->prev=  temp;



}

void  deleteNode(Doubly* head, int pos, Doubly* tail) {
       
        if(pos == 1) {
             Doubly* temp = head;
             temp->next->prev  =  NULL;
             head = temp->next;
             temp->next = NULL;


        }else {
              
               Doubly* curr  = head;
               Doubly* prev=  NULL;

               int c = 1;

               while(c < pos) {
                   prev = curr;
                   curr = curr->next;
                   c++;

               }

               curr->prev = NULL;
               prev->next  =curr->next;
               curr->next=  NULL;
                delete curr;
                

        }
}

int main () {

    //call here







}
