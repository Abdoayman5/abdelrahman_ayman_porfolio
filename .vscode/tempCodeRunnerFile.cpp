#include<iostream>
using namespace std;

int main (){

    int number ;
    cin>>number ;
    int ok=1;
    for(int i=2; i*i<=number; i++){
        if(number%i==0){
           ok=0;
          
        }
        
    }
    if(ok==1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
  


    return 0;
}