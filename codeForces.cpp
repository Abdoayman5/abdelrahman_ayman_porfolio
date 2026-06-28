#include<bits/stdc++.h>
#include<cmath>
#include<vector>
using namespace std;


void SelectionSort(int arr[],int size){
    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j= i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        int temp= arr[min];
        arr[min]=  arr[i];
        arr[i]=temp;
    }
}

int main (){

   int arr[]={20,12,15,10,2};
    int size= sizeof(arr)/sizeof(arr[0]);
   
 
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Before sorting"<<endl;
    cout<<"ARR is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    SelectionSort(arr,size);
    cout<<endl;
    cout<<"After sorting "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

return 0;

}
