#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

size_t count_calls()
    {
        static size_t ctr = 0;
        return ctr++;
    }
int main()
{
//    int ia[3][5] = {1,2,3,4,5,6,7,8,9,0,11,22,33,44,55};
//
//    cout << "第一种方式：" << endl;
//    for (int  (&row)[5] : ia) {
//        for (int &col : row) {
//            cout << col << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "第二种方式：" << endl;
//    for (int row = 0; row < 3; row++) {
//        for (int col = 0; col < 5; col++) {
//            cout << ia[row][col] << " ";
//        }
//    }
//    cout << endl;
//
//    cout << "第三种方式：" << endl;
//    for (int (*p)[5] = ia; p != ia + 3; ++p) {
//        for (int *q = *p; q != *p + 5; ++q) {
//            cout << *q << " ";
//        }
//    }
//    cout << endl << endl;
//
//    cout << "练习3.44：" << endl;
//    using int_array = int[5];
//    typedef int int_array[5];
//
//    for (int_array *p = ia; p != ia + 3; ++p) {
//        for (int *q = *p; q != *p + 5; ++q) {
//            cout << *q << " ";
//        }
//    }
//    cout << endl << endl;
//
//    cout << "练习3.45：" << endl;
//    for (auto *p = ia; p != ia + 3; ++p) {
//        for (auto *q = *p; q != *p + 5; ++q) {
//            cout << *q << " ";
//        }
//    }
//    cout << endl;

//    vector<int> num = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//
//    for (auto p = num.begin(); p != num.end(); ++p) {
//        cout << *p << " ";
//        *p = (*p % 2 == 0) ? *p : (2 * *p);
//    }
//    cout << endl;
//
//    for ( auto i : num) {
//        cout << i << " ";
//    }

//    string finalgrade;
//    double grade;
//    finalgrade = (grade > 90) ? "high pass"
//                                : (grade >= 75) ? "pass"
//                                : (grade >= 60) ? "low pass" : "fail";
//
//    if (grade > 90) {
//        finalgrade = "high pass";
//    } else if (grade >= 75) {
//        finalgrade = "pass";
//    } else if (grade >= 60) {
//        finalgrade = "low pass";
//    } else {
//        finalgrade = "fail";
//    }
//
//
//    string s = "word";
//    string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
//
//    int x[10]; int *p = x;
//    cout << sizeof(x)/sizeof(*x) << endl;
//    cout << sizeof(p)/sizeof(*p) << endl;
//
//    cout << sizeof(int *) << endl;

//    int m, x = 3, y = 6;
//    m = 1 < 5 ? ++x, ++y : --x, --y;
//    cout << m << endl;

//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0,
//    uCnt = 0, blankCnt = 0, tCnt = 0, nCnt = 0, ffCnt = 0,
//    flCnt = 0, fiCnt = 0;
//    char ch;
//    bool find = false;
//    while (cin >> ch) {
//        if (ch == 'a' || ch == 'A') {
//            ++aCnt;
//        } else if (ch == 'e' || ch == 'E') {
//            ++eCnt;
//        } else if (ch == 'i' || ch == 'I') {
//            ++iCnt;
//            if (ch == 'i' && find) {
//                ++fiCnt;
//                find = false;
//            }
//        } else if (ch == 'o' || ch == 'O') {
//            ++oCnt;
//        } else if (ch == 'u' || ch == 'U') {
//            ++uCnt;
//        } else if (ch == ' ') {
//            ++blankCnt;
//        } else if (ch == '/t') {
//            ++tCnt;
//        } else if (ch == '/n') {
//            ++nCnt;
//        } else if (ch == 'f' && !find) {
//                find = true;
//        } else if (ch == 'f' && find) {
//            ++ffCnt;
//            find = false;
//        } else if (ch == 'l' && find) {
//            ++flCnt;
//            find = false;
//        }
//    }

// how now now now now brown cow cow cow 1 2 3 ty ty ty ty ty ty
//    int cur = 1, max = 0;
//    string str, maxStr = "", curStr = "";
//    vector<string> st;
//    while (cin >> str) {
//        st.push_back(str);
//    }
//    cout << 111 << endl;
//    auto beg = st.begin();
//    while (beg != st.end()) {
//        if (*beg == curStr) {
//            ++cur;
//        } else {
//            cur = 1;
//            curStr = *beg;
//        }
//        if (cur > max) {
//            max = cur;
//            maxStr = curStr;
//        }
//        ++beg;
//    }
//    cout << "maxStr: " + maxStr << "  " << max << endl;

//    /**
//    * c++ primer 5.17
//    *
//    **/
//    vector<int> vint1 = {0,1,2,3,4,5}, vint2 = {0,1,2,3,4,5,6,7,8,11,12,113};
//    decltype(vint1.size()) i = 0, sz = vint1.size();
//    for (; i != sz && vint1[i] == vint2[i]; ++i) {
//        ;
//    }
//    if (i == sz) {
//        cout << "True" << endl;
//    } else {
//        cout << "False" << endl;
//    }


//    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
//    for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
//            auto &r = *beg;
//            r *= 2;
//
////        auto &r = beg;
////        *r *= 2;
//    }
//    for (auto i : v) {
//        cout << i << " ";
//    }

//    string rsp;
//    do {
//        cout << "please enter two string: ";
//        string str1, str2;
//        cin >> str1 >> str2;
//        cout << "str1:   " + str1 << endl;
//        cout << "str2:   " + str2 << endl;
//        if (str1.size() < str2.size()) {
//            cout << "较短的字符串是str1: " + str1 << endl;
//        } else if (str1.size() > str2.size()) {
//            cout << "较短的字符串是str2: " + str2 << endl;
//        } else {
//            cout << "str1 和 str2的长度相等。" << endl;
//        }
//        cout << "再输入一次？输入yes或者no:";
//        cin >> rsp;
//    } while (!rsp.empty() && rsp[0] != 'n');


//    //  qwe qsd axcv fgds fhfgh q e rt q e rt
//    string buf, mstr;
//    vector<string> str;
//    bool status = false;
//    while (cin >> buf && !status) {
//        for (auto i : str) {
//            if (i == buf) {
//                mstr = buf;
//                status = true;
//                break;
//            }
//        }
//        str.push_back(buf);
//    }
//
//    if (status) {
//        cout << "重复出现的单词是：" + mstr << endl;
//    } else {
//        cout << "没有任何单词是连续重复出现的" << endl;
//    }



//    //  qwe qsd axcv fgds fhfgh q e rt q e rt ASX AZS aSQ Qa Qa
//    string buf, mstr;
//    vector<string> str;
//    bool status = false;
//    while (cin >> buf && !status) {
//        if (buf[0] < 'A' || buf[0] > 'Z') {
//            continue;
//        }
//        for (auto i : str) {
//            if (i == buf) {
//                mstr = buf;
//                status = true;
//                break;
//            }
//        }
//        str.push_back(buf);
//    }
//
//    if (status) {
//        cout << "首字母大写并且重复出现的单词是：" + mstr << endl;
//    } else {
//        cout << "没有任何单词是连续重复出现的" << endl;
//    }

//    int sz = get_size();
//    while (sz <= 0) {
//        sz = get_size();
//    }


//    int n1, n2;
//    cout << "please input two integer: " << endl;
//    while (cin >> n1 >> n2) {
//        try {
//            if (n2 == 0) {
//                throw invalid_argument("除数不能为0");
//            }
//            cout << n1/n2 << endl;
//        } catch (invalid_argument err) {
//            cout << err.what()
//                 << "\nTry Again? Enter y or n" << endl;
//            char c;
//            cin >> c;
//            if (!cin || c == 'n') {
//                break;
//            }
//        }
//    }


//
//    for (size_t i = 0; i != 10; ++i) {
//        cout << count_calls() << endl;
//    }









    return 0;
}
