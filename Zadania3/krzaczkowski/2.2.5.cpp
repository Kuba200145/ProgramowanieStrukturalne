#include <iostream>
#include <cmath>

using namespace std;

double potegowanie(double n);
int main()
{
    double n;

    cout<<"Podaj potege do jakiej chcesz podniesc liczbe 2: ";
    cin>>n;
    if(n==int(n))
	{
		cout<<"2 do "<<n<<" to "<< potegowanie(n)<< endl;
    }
	else
        cout<<"Podana liczba nie jest calkowita"<<endl;
    return 0;
}

double potegowanie(double n)
{
    return pow(2, n);
}

