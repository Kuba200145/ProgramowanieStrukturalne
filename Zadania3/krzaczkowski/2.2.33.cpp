#include <iostream>

using namespace std;

int suma(int a, int b, int c, int d, int e);

int main()
{
	unsigned int a,b,c,d,e;
	cout<<"Podaj 5 liczb do zsumowania: ";
    cin>>a>>b>>c>>d>>e;
    int wynik1 = suma( a, b, c, d, e );
    cout<<wynik1;

	return 0;
}
int suma(int a, int b, int c, int d, int e)
{
	int wynik=a+b+c+d+e;
    return wynik;
}
