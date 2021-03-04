#include <iostream>

using namespace std;

int main()
{

int n, suma=0;
cout<<"Wprowadz nieujemna liczbe calkowita: "<<endl;
cin>>n;

for(int i=1; i< n+1; i ++)
{
    suma+=i*i;
}
cout<<"Suma pierwszych "<<n<<" kwadratow wynosi: "<<suma<<endl;

return 0;
}
