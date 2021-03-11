#include <iostream>

using namespace std;

int main()
{
    int i;
    char znaki[26];

    for (i = 0; i < 26; i++)
    {
        znaki[i] = 'a' + i;
        cout<<znaki[i]<<endl;
    }
    return 0;
}

