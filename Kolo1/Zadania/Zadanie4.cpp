#include <iostream>

using namespace std;

int ciag(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 3;
    if(n>3)
        return(ciag(n-3)+ciag(n-2)+ciag(n-1))/3;
}
int main()
{
    int n;
    do
    {
        cout<<"Podaj numer wyrazu ciagu, ktory chcesz wyznaczyc: ";
        cin>>n;
    }while(n<0);
        cout<<ciag(n);
    return 0;
}
