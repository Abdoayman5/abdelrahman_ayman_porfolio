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
   
