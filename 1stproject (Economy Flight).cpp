#include<iostream>
using namespace std;
int main(){
float a,b,c,d;
cout<<"Welcome to the economy flight"<<endl<<endl;
cout<<"We will check weather the additional charges may apply to you or not"<<endl<<endl;
cout<<"Press ENTER to start"<<endl<<endl;
cin.get();
cout<<"Enter the length of your suitcase(in inches) : ";
cin>>a;
cout<<endl;
cout<<"Enter the width of your suitcase(in inches) : ";
cin>>b;
cout<<endl;
cout<<"Enter the height of your suitcase(in inches): ";
cin>>c;
cout<<endl;
cout<<"Now plz enter the weight of suit case(in pounds) : ";
cin>>d;
cout<<endl;
cout<<"Data Processing.........."<<endl<<endl;
if(a>108 || b> 108 || c>108 || d>50){
        cout<<"Additional charges will be applied to you because "<<endl;
if( (a>108 || b>108 || c>108) && d>50) {
        cout<<"both weight and size of your suit-case are not satisfying the parameters.";
    }
else{
    if (a>108 || b>108 || c>108)
        cout<<"size of your suit-case are not satisfying the parameters.";

    if (d>50)
        cout<<"weight of your suit-case is not satisfying the parameters.";
        }

}
else{
        cout<<"Additional charges will not be applied to you"<<endl;
}
      return 0;
    }








