#include <iostream>

using namespace std;

int suma(int *a,int *b)
{
    return (*a + *b);
}
int main()
{
    int A,B;

    cout<<"Podaj pierwsza liczbe : ";
    cin>>A;
    cout<<"Podaj druga liczbe : ";
    cin>>B;

    cout<<"Suma liczb "<<A<<" i "<<B<<" to "<<suma(&A, &B);

    return 0;
}
