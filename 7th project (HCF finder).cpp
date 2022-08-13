#include<iostream>
using namespace std;
int main(){
    int num1,num2,a=1,HCF;
    cout<<"\n This is a program to find HCF of two numbers\n";
    cout<<"\n Press ENTER to start\n";
    cin.get();
    cout<<"\n Write the first number : ";
    cin>>num1;
    cout<<"\n Write the second number : ";
    cin>>num2;
    while(a<=num1 && a<=num2)
    {

    if(num1%a==0 && num2%a==0)
      {
        HCF=a;
      }
        a++;
    }
    cout<<"\n HCF of "<<num1<<" and "<<num2<<" is : "<<HCF<<endl<<endl;

  return 0;
}
