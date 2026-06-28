#include<iostream>
using namespace std;
#define SIZE 5
int stack[SIZE], top = -1;

void push(int value){
    if(top == SIZE-1){
        cout<<"stack overflow"<<endl;
    }else{
        top++;
        stack[top]=value;
    }
}
int pop(){
    if(top == -1){
        cout<<"stack underflow"<<endl;
    }else{
        return stack[top--];
    }
}
int peek(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        return stack[top];
    }
}
void display(){
    if(top==-1){
        cout<<" tack is empty"<<endl;
    }else {
        for(int i=top ; i>0; i++){
            cout<<stack[i]<<" ";
        }
    }
}

int main(){
  push(5);
  push(6);
  push(7);
 
  display();
  pop();
  display();

    

    return 0;

}