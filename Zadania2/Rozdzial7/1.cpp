#include <iostream>

using namespace std;

int main()
{

    char i;
    int odstepy=0;
    int linie=0;
    int inne=0;
    cout<<"Wpisuj dane, program przestanie dzialac po wpisaniu znaku #: "<<endl;

    do
    {
        if(i==' ')
            odstepy++;
        else if(i=='\n')
            linie++;
        else
            inne++;
    }while((i = getchar())!='#');

    cout<<"Ilosc odstepow: "<<odstepy<<endl;
    cout<<"Ilosc nowych linii: "<<linie<<endl;
    cout<<"Ilosc odstepow: "<<inne<<endl;

    return 0;
}
