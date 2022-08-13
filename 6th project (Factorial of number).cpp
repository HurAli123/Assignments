#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c;
    int b=1;

    cout<<"\n\nThis is a program to find the factorial of a number"<<endl<<endl;
    cout<<"Press ENTER to continue"<<endl;
    cin.get();
    cout<<"Enter the number : ";
    cin>>a;
    c=a;

     while(a>=1)
   {
        b=b*a;
        a=a-1;
   }
    cout<<"\nFactorial of "<<c<<" is :"<<endl<<endl<<c<<"! = "<<b;

     cout<<endl<<endl;

  return 0;
}
