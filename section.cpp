#include<iostream>
using namespace std;

struct node
{
  int value;
  node*next;
};
node*head=NULL;
void insertNode(int  data){
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
    newNode ->next = NULL;
    
   }
}
void displayNode(){
  
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
int main(){

    insertNode(10);
    insertNode(20);
    insertNode(30);
    displayNode();
    insert_beg(5);
    displayNode();
    delete_beg();
    displayNode();


    return 0;
}