#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, delta;
    cout<<"Wzor ogolny: y=ax^2+bx+c"<<endl;
    cout <<"Podaj a: " << endl;
    cin>>a;
    cout <<"Podaj b: " << endl;
    cin>>b;
    cout <<"Podaj c: " << endl;
    cin>>c;

    delta = ( b * b )-( 4 * a * c );
    if(delta>0)
    {
        x1 =( - b - sqrt(delta) ) /( 2 * a );
        x2 =( - b + sqrt(delta) ) /( 2 * a );
        cout<<"Rownanie ma dwa rozwiazania \nx1= "<<x1<<"\nx2= "<<x2<<endl;
    }
    else if(delta==0)
    {
         x1=( - b /( 2 * a ));
        cout << "Rownanie ma jendo rozwiazanie \nx1= "<<x1<<endl;
    }
    else
        cout<<"Brak rozwiazan rownania";

    return 0;
}
