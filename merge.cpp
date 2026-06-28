#include<iostream>
using namespace std;
 void merge(int arr[], int l , int m, int r){
    int i,j,k;
    int n1= m-l+1;
    int n2 = r-m;
    int *L = new int [n1], *R = new int [n2];
    for(i=0; i<n1; i++){
        L[i]=arr[l+i];
    }for(j=0; j<n2; j++){
        R[j]=arr[m+1+j];
    }

 }




int main (){









    return 0;
}