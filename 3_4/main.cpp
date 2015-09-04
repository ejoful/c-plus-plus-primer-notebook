#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if(str1 == str2)
    {
        cout << "str1 和 str2 相等" << endl;

    } else {
        cout << "str1 和 str2 不相等" << endl;
        cout << ((str1 > str2) ? str1 : str2)dfsd << endl;
    }
    return 0;
}
