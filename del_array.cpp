#include<iostream>
using namespace std;

int main(){
   int size=5;
   int arr[size]={10,20,30,40,50};
   int element;
   int index=1;
   cout<<" array before editing ; ";
   for(int i=0; i<size; i++){
    cout<< arr[i]<<" ";
   }
   cout<<endl;
   cout<<"enter your element ";
   cin>>element;

   for(int i=0; i<size; i++){
    if(element == arr[i]){
        index=i;
        break;
    }
   }
   if (index==1){
    cout<<"element not found "<<endl;
    return 0;
   }
   for(int i=index; i<size-1; i++){
    arr[i]=arr[i+1];
   }
   size--;
    cout<<" array after editing ; ";
   for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }

 


    return 0;
}