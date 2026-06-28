#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){

  
  char c;
  fstream infile;
  fstream l_file;
  infile.open("account.txt",ios::in);
    l_file.open("account.txt",ios::in |ios::app);

   infile.unsetf(ios::skipws);
   skip white space 
   infile >> c;
   while(!infile.fail()){
    cout<<c;
    infile>>c;
   }
    infile.close();
    getch();
   
   
   
  
  
    return 0;
}
