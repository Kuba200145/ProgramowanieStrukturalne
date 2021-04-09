#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Podaj dlugosc pierwszego boku trojkata: " << endl;
    cin>>a;
    cout<<"Podaj dlugosc drugiego boku trojkata: "<<endl;
    cin>>b;
    cout<<"Podaj dlugosc trzeciego boku trojkata: "<<endl;
    cin>>c;

    if ((a+b>c) && (a+c>b) && (b+c>a))
    {
        cout<<"Jestes w stanie zbudowac trojkat z podanych bokow"<<endl;
        return 1;
    }
    else
    {
        cout<<"Nie jestes w stanie zbudowac trojkata z podanych bokow";
        return 0;
    }
}
