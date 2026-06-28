#include<iostream>
using namespace std;


int main(){

    int size =5;
    int arr[size]={10,20,30,40,50};
    int element =0;
    int index=0;

   cout<<"enter your element ";
   cin>>element;

   for(int i=0; i<size; i++){
    if(arr[i]==element){
       index=i;
        break;
    }

   }
if(index==0){
    cout<<"element not found "<<endl;
}
else{
    cout<<" element found at index " <<index<<endl;
}






    return 0;
}