#include<iostream>
using namespace std;

struct node {
   int data;
  node* next;
    

};
node* head =NULL;
void insertNode(int value){
  node*newNode =new node;
  newNode->data=value;
  node*last;
  if(head==NULL){
    head=newNode;
    newNode->next=NULL;

  }
  else{
    last =head;
    while(last->next !=NULL){
        last=last->next;

    }
    last->next=newNode;
    newNode->next=NULL;
  }


}

void display(){
    if(head ==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        node* current =head;
        while(current != NULL){
            cout<<current->data<<" ";
            current=current->next;
        } 
    }
    cout<<endl;
}

void deleteNode(int value){
 if (head==NULL)return;

 node*current=head;
 node*prev=head;

 if(current->data==value){
    head=current->next;
    free(current);
    return;

 }
 while(current !=NULL && current->data != value){
    prev = current;
    current = current->next;
 }
 prev->next = current->next;
 free(current);
}

int main(){

    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    display();
    deleteNode(3);
    display();

    return 0;
}