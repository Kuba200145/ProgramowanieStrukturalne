#include <iostream>

using namespace std;

void rzad_zn(char ch, int i, int j);

int main()
{
    int i,j;
    char ch;
    cout<<"Podaj znak: "<<endl;
    cin>>ch;
    cout<<"Podaj poczatek jako liczbe: "<<endl;
    cin>>i;
    cout<<"Podaj koniec jako liczbe: "<<endl;
    cin>>j;
    rzad_zn(ch, i, j);

}

void rzad_zn(char ch, int i, int j)
{
    for(i;i<=j;i++)
    {
        cout<<endl;
        cout<<i;
        cout<<ch;
    }
}
