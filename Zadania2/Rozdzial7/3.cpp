#include <iostream>

using namespace std;

int main()
{
    int i;
    int Parzyste=0;
    int Nieparzyste=0;
    float SredniaP=0;
    float SredniaNP=0;

    cout<<"Podaj dowolne liczby calkowite, 0 przerywa operacje: ";

    while(scanf("%d", &i)==1 && i!=0)
    {
        if(i==0) break;
        if(i%2==0)
        {
            SredniaP=SredniaP+i;
            Parzyste++;
        }
        else
        {
            SredniaNP=SredniaNP+i;
            Nieparzyste++;
        }
    }
    cout<<"Ilosc liczb parzystych to: "<<Parzyste<<endl;
    cout<<"Ilosc liczb nieparzystych to: "<<Nieparzyste<<endl;
    cout<<"Srednia liczb parzystych to: "<<SredniaP/Parzyste<<endl;
    cout<<"Srednia liczb nieparzystych to: "<<SredniaNP/Nieparzyste<<endl;

    return 0;
}
