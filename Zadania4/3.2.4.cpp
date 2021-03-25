#include <iostream>

using namespace std;

void zamien(int *a,int *b)
{
    if(*b > *a)
        swap(*a,*b);
}

int main()
{
    int A,B;

    cout<<"Podaj pierwsza liczbe : ";
    cin>>A;
    cout<<"Podaj druga liczbe : ";
    cin>>B;

    if(B>A)
    {
     zamien(&A,&B);
     cout<<A<<" "<<B<<endl;
    }
    else cout<<"Liczby nie ulegly zamianie";

    return 0;
}
