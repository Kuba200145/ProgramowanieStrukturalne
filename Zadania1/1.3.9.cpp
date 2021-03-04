#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b, wynik;
    int dzialanie;
    cout<<"Podaj pierwsza liczbe: "<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe: "<<endl;
    cin>>b;

    cout<<"Wybierz rodzaj dzialania: "<<endl;
    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cout<<"3.Mno¿enie"<<endl;
    cout<<"4.Dzielenie"<<endl;
    cin>>dzialanie;

    if(dzialanie==1)
    {
        wynik=a+b;
        cout<<"Suma liczb wynosi: "<<wynik<<endl;
    }
    else if(dzialanie==2)
    {
        wynik=a-b;
        cout<<"Roznica liczb wynosi: "<<wynik<<endl;
    }
    else if(dzialanie==3)
    {
        wynik=a*b;
        cout<<"Mnozenie liczb wynosi: "<<wynik<<endl;
    }
    else if(dzialanie==4)
    {
        if(b!=0)
        {
          wynik=a/b;
        cout<<"Dzielenie liczb wynosi: "<<wynik<<endl;
        }
        else cout<<"Nie dzielimy przez 0"<<endl;
    }
    else cout<<"Nie wybrano operacji z przedzialu 1-6"<<endl;

    return 0;
}
