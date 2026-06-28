#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  int m,n;
 while(true){
     cin>>m>>n;
    if(m <= 0 || n <= 0){
      break;
    }
  int maxx=max(m,n);
  int minn=min(m,n);
  int sum=0;
  for(int i=minn; i<=maxx; i++){
    cout<<i<<" ";
    sum +=i;
  }
  cout<<"sum= "<<sum<<endl;
}
 return 0;
}

//جدول الضرب 
//    int number;
// cout<<"enter your number ";
// cin>>number;
//    for(int num=1; num<=12; num++){
//     for(int i=1; i<=12; i++){
//     cout<< num<<" * "<< i <<" = "<<num*i<<endl;
//     }
//     cout<<"-------------------------------------"<<endl;
//    }










//طباعة النجوم
// for (int x=1; x<=4; x++){
//      cout<<endl;
//     for (int i=1; i<=x; i++)
//     {
//         cout<<"* ";
       
//     }
    
// }


//المثلث معكوس
// for (int x=4; x>=1; x--){
//     cout<<endl;
//     for(int i=1; i<=x; i++)
//     {  
//         cout<<"* ";
//     }
// }






// do while to print treagle

//    int x=1;
//    do{
//     int j=1; 
//     do{
//         cout<<"* ";
//         j++;
//     }while(j<=x);
//     cout<<endl;
//     x++;
//    }while(x<=4);











//طباعة هرم نجوم
// int n; cin>>n;
// int spaces=n-1;
// int stars=1;
// for (int i=1; i<=n; i++){
//     for(int j=1; j<=spaces; j++){
//         cout<<" ";
//     }
//     spaces--;
//     for(int x=1; x<=stars; x++){
//         cout<<"*";
//     }
//     stars +=2;
//     cout<<endl;
// }
