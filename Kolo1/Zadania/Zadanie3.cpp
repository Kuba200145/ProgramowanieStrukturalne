#include <iostream>

using namespace std;

void wypisz(int [],int);

int main()
{
    const int rozmiar=10;
    int liczba;
    int tab[rozmiar]={5,3,2,10,4,7,1,8,9,6};
    wypisz(tab,rozmiar);
    return 0;
}
void wypisz(int tab[],int rozmiar)
{
    for(int i=0;i<rozmiar;i++)
        if(tab[i]%2==0)
        cout<<tab[i]<<" ";
}
