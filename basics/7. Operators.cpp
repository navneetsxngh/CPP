#include <iostream>
using namespace std;
int main(){
    int x = 12 , y = 5;
    cout << "Sum : " << x + y << endl;
    cout << "Sub : " << x - y << endl;
    cout << "Mul : " << x * y << endl;
    cout << "Div : " << x / y << endl;
    cout << "Div : " << float(x) / float(y) << endl;
    cout << "FDiv : " << x % y << endl;
    cout << y % x << endl;
    
    // -x % y = -[x % y]
}