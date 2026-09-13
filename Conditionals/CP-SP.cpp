#include <iostream>
using namespace std;
int main(){
    float CostPrice;
    float SellingPrice;
    cout << "Enter Cost Price : ";
    cin >> CostPrice;
    cout << "Enter Selling Price : ";
    cin >> SellingPrice;

    if (SellingPrice > CostPrice) {
        cout << "Profit is : " << SellingPrice - CostPrice;
    }else if (SellingPrice < CostPrice) {
        cout << "Loss is : " << CostPrice - SellingPrice;
    }else {
        cout << "No Profit No Loss";
    }
}