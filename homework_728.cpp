#include <iostream>
#include <string>

using namespace std;

int main(){
    int A;
    int B;
    string op;
    cin >> A;
    cin >> op;
    cin >> B;
    if (op == "+"){
        cout << A + B << endl;
     }else if(op == "-"){
         cout << A - B << endl;
     }else if(op == "×"){
         cout << A * B << endl;
     }else if(op == "÷"){
         cout << A / B << endl;
     }
return 0;
}










