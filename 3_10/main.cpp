#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    decltype(s.size()) len = 0;
    while(len != s.size())
    {
        if(!ispunct(s[len]))
           {
               cout << s[len];
           }
        len++;
    }
    cout << endl;

    const string s1 = "Keep out!";
    for (auto &c : s1)

    return 0;
}
