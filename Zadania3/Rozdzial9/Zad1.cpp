#include <iostream>

using namespace std;

double min(double x, double y);

int main()
{
    double x,y;
    cout<<"Podaj pierwsza liczbe: "<<endl;
    cin>>x;
    cout<<"Podaj druga liczbe: "<<endl;
    cin>>y;
    cout<<"Mniejsza liczba to: "<<min(x,y)<<endl;

}

double min(double x, double y)
{
    double min;
    if(x>y)
        min=y;
    else
        min=x;

    return min;
}
