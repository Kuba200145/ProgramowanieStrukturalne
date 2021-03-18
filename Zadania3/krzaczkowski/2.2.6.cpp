#include <iostream>
#include <cmath>

using namespace std;

double potegowanie(double n, double m);
int main()
{
    double n;
    double m;

    cout<<"Podaj nieujemna podstawe: ";
    cin>>n;
    cout<<"Podaj nieujemny wykladnik: ";
    cin>>m;

    if(n==int(n) && m==int(m) && n>0 && m>=0)
	{
		cout <<n<< " do "<<m<<" to "<< potegowanie(n,m) << endl;
    }
	else
        cout<<"Wykladnik lub podstawa nie sa liczbami calkowitymi"<<endl;
    return 0;
}

double potegowanie(double n, double m)
{
    return pow(n, m);
}
