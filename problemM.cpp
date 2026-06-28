#include<iostream>
using namespace std;
int main(){

int answer[3];
int points=0;

int sequence[3][5] = {
        {1,3,5,7,9},
        {0,2,4,6,8},
        {2,5,7,9,8}
    };

cout<<"sequence 1 :"<<endl;
cout<<" {1,3,5,7,??}"<<endl;
cin>>answer[0];

cout<<"sequence 2 :"<<endl;
cout<<" {0,2,4,6,??}"<<endl;
cin>>answer[1];

cout<<"sequence 3 "<<endl;
cout<<" {2,5,7,9,??}"<<endl;
cin>>answer[2];
   

if(answer[0] == sequence[0][4]){
    points++;
  }
if(answer[1] == sequence[1][4]){
    points++;
  }
if(answer[2] == sequence[2][4]){
    points++;
  }
cout<<"your points is : "<<points<<endl;


   return 0;
} m