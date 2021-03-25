#include <iostream>

using namespace std;

void zamiana(int n,int *w)
{
    *w=n;
}

int main()
{
    int N;
    int W=0;

    cout<<"Podaj liczbe: ";
    cin>>N;
    cout<<"Wartosc przed zamiana: " <<W<<endl;
    zamiana(N, &W);
    cout<<"Wartosc po zamianie: " <<W<<endl;

    return 0;
}
