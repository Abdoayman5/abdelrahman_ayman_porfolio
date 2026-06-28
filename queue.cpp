#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue(int value){
    if (rear != SIZE-1){
       if(front == -1 && rear == -1){
        
        front++;
        queue[++rear]=value;
       }else{
        queue[++rear] = value;
       }
    }else{
        cout<<" queue is full"<<endl;
    }
}
void dequeue(){
    if(front != -1 && rear!= -1 && front <= rear){
        front++;
    }else {
        cout<<" queue is empty"<<endl;
    }
}
int peek(){
    if(front != -1 && front<=rear && rear!= -1){
        return queue[front];
    }else{
        cout<<" queue is empty"<<endl;
    }
}
void display(){
    if(front != -1 && rear != -1 && front <= rear){
        for(int i = front ; i<=rear; i++){
            cout<<queue[i]<<"\t";
        }cout<<endl;
    }else{
        cout<<" queue is empty"<<endl;
        }
    
}
int main(){

    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
  display();
   dequeue();
   display();
   cout<<"peek is "<<peek();


  return 0;
}