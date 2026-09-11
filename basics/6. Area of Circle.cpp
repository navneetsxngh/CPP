#include <iostream>
using namespace std;
int main(){
    float r = 4.3;
    float area = 3.14 * r * r;
    cout << "Area of the circle is : " << area << endl;

    {
        float P, R, T;
        cout << "Principle : ";
        cin >> P;
        cout << "Rate : ";
        cin >> R;
        cout << "Time : ";
        cin >> T;
        float SI = (P * R * T)/100;
        cout << "Simple Interest: " << SI << endl;
    }
    {
        int x, y;
        cout << "Enter X : ";
        cin >> x;
        cout << "Enter Y : ";
        cin >> y;
        cout << "The Sum of X and Y is : " << x + y << endl;
    }
}
