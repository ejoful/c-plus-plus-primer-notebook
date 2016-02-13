#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string num;
    vector<string> ivec;
    while (cin >> num)
    {
            ivec.push_back(num);

    }
   for(int i = 0; i < ivec.size(); ++i)
             cout<<ivec[i]<<endl;
    return 0;
}
