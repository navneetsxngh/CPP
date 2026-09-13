#include <iostream>
using namespace std;
int main(){
    float CostPrice;
    float SellingPrice;
    cout << "Enter Cost Price : ";
    cin >> CostPrice;
    cout << "Enter Selling Price : ";
    cin >> SellingPrice;

    (SellingPrice > CostPrice) ? cout << "Profit is : " << SellingPrice - CostPrice :
    (SellingPrice < CostPrice) ? cout << "Loss is : " << CostPrice - SellingPrice :
    cout << "No Profit No Loss";
    return 0;
}