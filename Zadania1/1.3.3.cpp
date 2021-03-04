#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
	cout<<"Podaj pierwsza liczbe calkowita: ";
	cin>>a;
	cout<<"Podaj druga liczbe calkowita: ";
	cin>>b;
	cout<<"Podaj trzecia liczbe calkowita: ";
	cin>>c;

    if(a>b && a>c)
        cout<<"Najwieksza liczba to: "<<a;
    if(b>a && b>c)
        cout<<"Najwieksza liczba to: "<<b;
    if(c>a && c>b)
        cout<<"Najwieksza liczba to: "<<c;
    if(a==b && b==c && a==c)
        cout<<"Wszystkie trzy liczby sa sobie rowne";

    return 0;
}
