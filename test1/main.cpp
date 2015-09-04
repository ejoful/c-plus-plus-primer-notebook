#include <iostream>

using namespace std;

int main()
{

    string str("some string");
    for (auto c : str)
    {
        cout << c << endl;
    }
    cout << "---------------------------------------" << endl;

    string s("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;

    for (auto c : s)
    {
        if (ispunct(c))
        {
            ++punct_cnt;
        }
    }
    cout << punct_cnt << " punctuation characters in " << s << endl;
    cout << "---------------------------------------" << endl;

    string s1("Hello World!!!");
    //转换成大写形式
    for (auto &c : s1)
    {
        c = toupper(c);
    }
    cout << s1 << endl;
    cout << "---------------------------------------" << endl;

    if(!s.empty())
    {
        cout << s[0] << endl;
    }
    cout << "---------------------------------------" << endl;


    s = "some string";
    //依次处理s中的字符直至我们处理完全部字符或者遇到一个空白
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
    {
        s[index] = toupper(s[index]);
    }
    cout << s << endl;
    cout << "---------------------------------------" << endl;


    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces, Hit ENTER when finished: "
         << endl;
    string result;
    string::size_type n;
    while (cin >> n)
    {
        if(n < hexdigits.size())
        {
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;










    return 0;
}
