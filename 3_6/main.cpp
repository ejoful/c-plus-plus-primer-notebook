#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(decltype(s.size()) index = 0; index != s.size(); ++index)
    {
        s[index] = 'X';
    }
    cout << s << endl;

    decltype(s.size()) len = 0;
    while(len != s.size())
    {
        s[len] = 'X';
        len++;
    }
    cout << s << endl;

    string i;
    cout << i[10] << endl;

    decltype(s.size()) len1 = 0;
    while(len1 != s.size())
    {
        if(!ispunct(s[len1]))
           {
               cout << s[len1];
           }
        len1++;
    }
    cout << endl;
    return 0;
}
