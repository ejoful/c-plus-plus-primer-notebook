#include <iostream>
#include <vector>

using namespace std;

void trans(int *m, int *n);
void vcout(vector<int> &num);

typedef string strArr[10];
strArr* func(int i);


auto func(int i) -> string(*)[10];

string mStr[10] = {"1","2","3","4","5","6","7","8","9","0"};
decltype(mStr) *func(int i);

//#define NDEBUG;

int main(int argc, char *argv[])
{
//    string t = argv[1];
//    t += argv[2];
//    cout << t;
    vector<int> m = {1,2,3,4,5,6};
    vcout(m);
//    int a =11, b = 15;
//    trans(&a, &b);
//    cout << a << "  " << b << endl;
    return 0;
}

//void trans(int *m, int *n)
//{
//    int temp = *m;
//    *m = *n;
//    *n = temp;
//}
//
//void reset(int &i)
//{
//    i = 0;
//}
//
//void new_trans(int &m, int &n)
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}
//
//void error_msg(initializer_list<string> il)
//{
//    for (auto beg = il.begin(); beg != il.end(); ++beg) {
//        cout << *beg << " ";
//    }
//    cout << endl;
//}
//
////void error_msg(ErrCode e, initializer_list<string> il)
////{
////    cout << e.msg() << ": ";
////    for (const auto &elem : il) {
////        cout << elem << " ";
////    }
////    cout << endl;
////}
//
//
//int addv(initializer_list<int> il)
//{
//    int sum = 0;
//    for (auto beg = il.begin(); beg != il.end(); ++beg) {
//        sum += *beg;
//    }
//    return sum;
//}
//
//void swap(int &v1, int &v2)
//{
//    if (v1 == v2) {
//        return;
//    }
//    int tmp = v2;
//    v2 = v1;
//    v1 = tmp;
//}
//
//bool str_subrange(const string &str1, const string &str2)
//{
//    if (str1.size() == str2.size()) {
//        return str1 == str2;
//    }
//    auto size = (str1.size() < str2.size())
//                ? str1.size() : str2.size();
//    for (decltype(size) i = 0; i != size; ++i) {
//        if (str1[i] != str2[i]) {
//            return false;
//        }
//    }
//    return true;
//}

void vcout(vector<int> &num)
{
    #ifndef NDEBUG
        cerr << __func__ << ":vector size is " << num.size() << endl;
    #endif // NDEBUG
    static decltype(num.size()) i = 0;
    if (i == num.size()) return;
    cout << num[i++] << "  ";
    vcout(num);
}

string str[10] = {"1","2","3","4","5","6","7","8","9","0"};
string (*func(int i))[10]
{
    return &str;
}

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

auto arrPtr(int i) -> int(&)[5]
{
    return (i % 2) ? odd : even;
}


int vf(int,int);
vector<int(*)(int,int) e;

