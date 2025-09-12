#include <iostream>
#include <iomanip>
using namespace  std;
int main() {
    int days;
    double dailysales,
    total_sales=0,
    averagesales;
    cout<<"For how many days do you have sales figure";
    cin>>days;
    for ( int day=1;day<=days;day++) {
        cout<<"Enter sales for day"<<day<<" : ";
          cin>>dailysales;
        total_sales+=dailysales;
    }
    averagesales=total_sales/days;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\n Total sales: "<<total_sales;
    cout<<"\n average sales: "<<averagesales;



    return 0;
}