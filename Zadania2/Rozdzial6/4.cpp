#include <iostream>
using namespace std;

int main()
{
    char i;
    char j;
    int k, l, m, znak;
    cout<<"Wprowadz wielka litere: ";
    cin>>j;
    znak=j-65;
    for(l=65; l<=j; l++)
        {
        for(m=0; m<znak; m++)
        {
            cout<<" ";
        }

        for(i=65; i<=j-znak; i++)
        {
            cout<<i;
        }
            znak--;
            i-=2;

        for(k=65; k<l; k++)
        {
            cout<<i;
            i-= 1;
        }
        cout<<"\n";
    }
    return 0;
}
