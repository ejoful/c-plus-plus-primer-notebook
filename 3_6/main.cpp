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
    return 0;
}
