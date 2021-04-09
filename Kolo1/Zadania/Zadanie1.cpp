#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float c,c1,b,b1,delta,x1,x2,x;
    cout<<"Rownanie: (3*c)x^2+2*b*x+4"<<endl;                                                                                                               
    cout<<"Podaj c: "<<endl;
    cin>>c;
    cout<<"Podaj b "<<endl;
    cin>>b;

    c1=3*c;
    b1=2*b;

    delta=(b1*b1)-(4*c1*4);

    if(delta>0)
    {
        x1=(-b1-sqrt(delta))/(2*c1);
        x2=(-b1+sqrt(delta))/(2*c1);
        cout<<"Delta wieksza od 0"<<endl;
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }
    if(delta==0)
    {
        x=-b1/(2*c1);
        cout<<"Delta rowna 0"<<endl;
        cout<<"Jedno miejsce zerowe: "<<x<<endl;
    }
    if(delta<0)
        cout<<"Delta mniejsza od 0, brak rozwiazan";
}
