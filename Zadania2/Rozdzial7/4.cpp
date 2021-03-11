#include <iostream>

using namespace std;

int main()
{
    char i;
    int wykrzyknik=0, kropka=0;
    cout<<"Wpisuj dane, program przestanie dzialac po wpisaniu znaku #: "<<endl;

    while((i=getchar())!= '#')
    {
            if(i=='!')
        {
            cout<<"!!";
            wykrzyknik++;
        }
        else if(i=='.')
        {
            cout<<"!";
            kropka++;
        }
        else
            cout<<i;
        }

    cout<<"Ilosc zmian wykrzyknikow: "<<wykrzyknik<<endl;
    cout<<"Ilosc zmian kropek: "<<kropka<<endl;

    return 0;
}
