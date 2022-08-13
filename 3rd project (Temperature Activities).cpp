#include<iostream>
using namespace std;
int main() {
    int t;
    cout << "write the temperature at which you want to know"<<endl<<"my activities( between 10*C to 40*C) : ";
    cin >> t;
    if (t >= 40 ) {
        cout << "Take a cool bath ";
    }else
        if (t >= 30 && t <40) {
            cout << "Chill in Air condition room";
        }
        else
            if (t >= 20 && t<30) {
                cout << "Play outdoor games";
            }
            else
                if (t >= 10 && t<20) {
                    cout << "Read some books in front of heater";
                }
    return 0;
}
