#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;

    for(i=a; i<=b; i++)
        cout<<i<<"|"<<i*i<<"|"<<i*i*i<<"\n";

    return 0;
}
