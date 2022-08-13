#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"Write your obtained Marks : ";
cin>>a;
cout<<"Write total Marks : ";
  cin>>b;
  c = a/b*100;
  cout<<"Your percentage is : "<<c<<" and your grade is : ";
  if (c>=90){
     cout<<"A";
      }
    if (c>=70 && c<90){
     cout<<"B";
      }
  if (c>=50 && c<70){
     cout<<"C";
      }
   if (c>=40 && c<50){
     cout<<"D";
      }
       if (c>=33 && c<40){
     cout<<"E";
      }
       if (c<33){
     cout<<"F";
      }

  return 0;  }
