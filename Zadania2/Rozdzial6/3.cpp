#include <iostream>

using namespace std;

int main()
{
    int i;
    int znaki=5;
    char j;


    for(i=0; i<6; i++)
        {
            for(j=('A'+i); j<=('A'+znaki); j++)
        {
            cout << j;
        }
        cout << endl;
        }
    return 0;
}
