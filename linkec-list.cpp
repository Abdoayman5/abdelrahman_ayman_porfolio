#include<iostream>
using namespace std;
struct node
{
  int value;
  node*next;
};
node*head=NULL;


void insertNode(int  data){

//   START

// Create a node to store the data

// Check if the list is empty

// If the list is empty, add the data to the node and assign the head pointer to it.

// If the list is not empty, add the data to a node and link to the current head. Assign the head to the newly added node.

// END
   node *newNode;
   node *last;
   newNode = new node;
   newNode->value=data;
   
   if (head==NULL){
    head=newNode;
    newNode->next=NULL;
    
   }else{
    last=head;
    while(last->next !=NULL){
      last=last->next;
    }
    last->next = newNode;
    newNode ->next = NULL:
    
   }
}
void printNode(){
  
  if (head==NULL)
  {
    cout<<"list is empty"<<endl;
    return;
  }
  node* currentNode=head;
  
    
    while(currentNode != NULL){
      cout<<currentNode->value<<"\t";
      currentNode = currentNode->next;
    }
    cout<<endl;
  
}

void deleteNode(int data) {
    if (head == NULL) return;

    node* current = head;
    node* previous = head;

  
    if (current->value == data) {
        head = current->next;
        delete current;
        return;
    }
     while (current != NULL && current->value != data) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete current;
}


void insert_beg(int data){
  node* newNode = new node ;
  newNode->value = data;
  newNode->next = head;
  head =newNode;
}

void delete_beg(){

  if(head == NULL){
    cout<<"list is empty"<<endl;
    return;
  }
  else {
    node* first_node =head;
    head = head->next;
    delete first_node;
  }
  }

void delete_end(){
    if(head == NULL){
      return;  

    }
    if (head->next == NULL){
      delete head;
      head= NULL;
      return;
    }
    
      node* ptr =head;
      while(ptr ->next->next !=NULL){
        ptr = ptr->next;
      }
      delete ptr->next;
      ptr->next = NULL;
    
    }





int main(){

    insertNode(4);
    insertNode(5);
    insertNode(6);
    printNode();
    deleteNode(4);
    
  return 0;
}


