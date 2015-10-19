#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;
//string sa[10];
//int ia[10];

int main()
{
//    vector<vector<int>> ivec;
//    //vector<string> svec;
//    vector<string> svec(10, "null");
//
//    vector<int> v1;
//    vector<int> v2(10);
//    vector<int> v3(10, 42);
//    vector<int> v4{10};
//    vector<int> v5{10, 42};
//    vector<string> v6{10};
//    vector<string> v7{10, "hi"};
//    cout << "v1.size() " << v1.size() << endl;
//    cout << "v2.size() " << v2.size() << endl;
//    cout << "v3.size() " << v3.size() << endl;
//    cout << "v4.size() " << v4.size() << endl;
//    cout << "v5.size() " << v5.size() << endl;
//    cout << "v6.size() " << v6.size() << endl;
//    cout << "v7.size() " << v7.size() << endl;
//    vector<int> v2;         //空vector对象
//    for (int i = 0; i != 100; ++i) {
//        v2.push_back(i);    //依次把整数值放到v2尾端
//    }
//    //循环结束后v2有100个元素，值从0到99
//    cout << "v2.size() " << v2.size() <<endl;

//    string word;
//    vector<string> text;
//    while (cin >> word) {
//        text.push_back(word);
//    }
//    cout << "text.size() " << text.size() <<endl;

//    int num;
//    vector<int> number;
//    while (cin >> num) {
//        number.push_back(num);
//    }
//    cout << "number.size() " << number.size() <<endl;

//    vector<int> v{1,2,3,4,5,6,7,8,9};
//    for (auto &i : v) {
//        i *= i;
//    }
//    for (auto i : v) {
//        cout << i << " ";
//    }
//    cout << endl;

//    vector<unsigned> scores(11, 0);
//    unsigned grade;
//    while (cin >> grade) {
//        if (grade <= 100) {
//            ++scores[grade/10];
//        }
//    }

//    vector<int> ivec;
////    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix) {
////        ivec[ix] = ix;
////    }
//
//    for (decltype(ivec.size()) ix = 0; ix != 10; ++ix) {
//        ivec.push_back(ix);
//    }
//
//    string word;
//    vector<string> text;
//    while (cin >> word) {
//        for (auto &c : word) {
//            c = toupper(c);
//        }
//        text.push_back(word);
//    }
//    for (auto w : text) {
//        cout << w << endl;
//    }

//
//    vector<int> ivec{42};
//    vector<int> ivec1(10, 42);
//    vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
//    vector<int> ivec3;
//    for (int i = 0; i < 10; i++) {
//        ivec3.push_back(42);
//    }

//    int n;
//    vector<int> num;
//    while (cin >> n) {
//        num.push_back(n);
//    }
//    for (decltype(num.size()) i = 0; (i+1) < num.size(); ++i) {
//        n = num[i] + num[i+1];
//        cout << n << endl;
//    }
//    cout << "second : " << endl;
//    for (decltype(num.size()) i = 0; (i != (num.size() - i - 1) && i < (num.size() - i - 1)); i++) {
//        n = num[i] + num[num.size() - i - 1];
//        cout << n << endl;
//    }

//    string s("some string");
//    if (s.begin() != s.end()) {
//        auto it = s.begin();
//        *it = toupper(*it);
//    }
//    cout << s << endl;

//    string s = "hello world!";
//    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
//        *it = toupper(*it);
//    }
//    cout << s << endl;

//    vector<int> num = {1,2,3,4,5,6,7,8,9,10};
//    for (auto it = num.begin(); it != num.end(); ++it) {
//        *it *= 2;
//        cout << *it <<endl;s
//    }

//    vector<string> text = {"WASHINGTON — In a reflection of just how important Washington’s relationship with Beijing has become, President Obama on Friday held his second state dinner for China, the only country to receive such a double honor from him.","",
//"And the guest list reflected just how important Beijing is to America’s titans of technology. The guests included Mark Zuckerberg, who is trying to persuade the Chinese government to lift a ban on Facebook, the company he founded, and Tim Cook, the chief executive of Apple, which sells more iPhones in China than in any other country.",
//"","Also on the list were Satya Nadella, the chief executive of Microsoft, which wants China to approve sales of its latest operating system, Windows 10; Larry Ellison, the executive chairman of Oracle; and Jeffrey Katzenberg, the chief executive of DreamWorks Animation."};
//    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//        for(auto wor = it->begin(); wor != it->end(); ++wor) {
//            *wor = toupper(*wor);
//        }
//        cout << *it << endl;
//    }

//    auto beg = text.begin(), end = text.end();
//    auto mid = text.begin() + (end - beg)/2;
//     while (mid != end && *mid != sought) {
//        if(sought < *mid) {
//            end = mid - 1;
//        } else {
//            beg = mid + 1;
//        }
//        mid = beg + (end - beg)/2;
//     }
//     1 2 3 4 5 6 7 8 9 10
//    int n;
//    vector<int> num;
//    while (cin >> n) {
//        num.push_back(n);
//        cout << n << ' ';
//    }
//    cout << endl;
////    for(auto iter = num.begin(); iter != (num.end() - 1); ++iter) {
////        n = *iter + *(iter + 1);
////        cout << n << ' ';
////    }
////    cout << endl;
//
//    for (auto ahead = num.begin(), fllow = num.end() - 1; ahead < fllow; ++ahead, --fllow) {
//        n = *ahead + *fllow;
//        cout << n << ' ';
//    }
//    cout << endl;

//  13  23 45 67 78 76 79 73 34 55 56  99 100 100
//    vector<unsigned> scores(11, 0);
//    unsigned grade;
//    while (cin >> grade) {
//        if (grade <= 100) {
//            ++(*(scores.begin() + (grade/10)));
//        }
//    }
//    for (auto i : scores) {
//                cout << i << " ";
//               }
//    cout << endl;


//
//    int txt_size();
//    unsigned buf_size = 1024;
//    int ia[buf_size];
//    int ia1[4 * 7 - 14];
//    int ia3[txt_size()];
//    char st[12] = "fundamental";

//    string sa2[10];
//    int ia2[10];
//    for(int i = 0; i < 10; i++) {
//        cout << ia2[i] << " ";
//    }
//    cout << endl;

//    int a[10];
//    for(size_t i = 0; i < 10; i++) {
//        a[i] = i;
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    //int b[10] = a[10];
//
//    vector<int> a1;
//    for(size_t i = 0; i < 10; i++) {
//        a1.push_back(i);
//        cout << a1[i] << " ";
//    }
//    cout << endl;

//    int a[10];
//    int *pbeg = begin(a), *pend = end(a);
//    while (pbeg != pend) {
//        *pbeg = 0;
//        ++pbeg;
//    }
//    for (auto i : a) {
//        cout << i << " ";
//    }
//    cout << endl;

//    int a1[] = {1,2,3,4,5,6,7,8,9,0};
//    int a2[] = {1,3,4,5,6,7,8,9,2,0};
//
//    int a1_len = end(a1) - begin(a1);
//    int a2_len = end(a2) - begin(a2);
//
//    int isequal = 1;
//    if(a1_len != a2_len) {
//        isequal = 0;
//    } else {
//        for (int i = 0; i < a1_len; i++) {
//            if (a1[i] != a2[i]) {
//                isequal = 0;
//            }
//        }
//    }
//    cout << a1_len << "  " << isequal << endl;

//    vector<int> num1 = { 1,2,3,4,5,6,7}, num2 = {1,2,3,4,5,6,7,0};
//    int isequal = 1;
//    int num1_len = num1.end() - num1.begin();
//    if(num1.size() != num2.size()) {
//        isequal = 0;
//    } else {
//        for (int i = 0; i < num1_len; i++) {
//            if (num1[i] != num2[i]) {
//                isequal = 0;
//            }
//        }
//    }
//    cout << isequal << endl;

//
//    string s1 = "anfsdfljsd;fjsdlkfl;ljfdlfjls";
//    string s2 = "lkjkl;dfjdkl;sfjdslkfjsdlf";
//
//    if (s1 < s2) {
//        cout << "s1 < s2" << endl;
//    } else if (s1 > s2) {
//        cout << "s1 > s2" << endl;
//    } else if (s1 == s2) {
//        cout << "s1 == s2" << endl;
//    }
//
//    const char ca1[] = "A string example";
//    const char ca2[] = "A different string";
//
//    cout << strcmp(ca1, ca2) << endl;


//    const char ca1[] = "A string example";
//    const char ca2[] = "A defferent string";
//    const int len = end(ca1) - begin(ca1) + end(ca2) - begin(ca2);
//    char ca3[len];
//
//    strcpy(ca3, ca1);
//    strcat(ca3, ca2);
//
//    cout << ca3 << endl;

//    int arr[] = {1,2,3,4,5,6,7,8,0,123};
//    vector<int> int_vec(begin(arr), end(arr));
//    vector<int> ivec = {1,2,3,4,5,6,76,8,9,0,123};
//    int arr1[11];
//
//    for (int i = 0; i < ivec.end() - ivec.begin(); i++) {
//        arr1[i] = ivec[i];
//    }
//    for (auto i : arr1) {
//        cout << i << " ";
//    }

    int ia[3][5] = {1,2,3,4,5,6,7,8,9,0,11,22,33,44,55};

    for (int  &row : ia) {
        for (int &col : row) {
            cout << col << " ";
        }
    }








    //cout << "Hello world!" << endl;
    return 0;
}
//int txt_size()
//{
//    return 16;
//}


