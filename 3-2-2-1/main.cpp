#include <iostream>

using namespace std;

int main()
{
    string word;
    while (cin >> word)
    {
        if( word != " ")
        {
            cout << word << endl;
        }
    }
    return 0;
}
