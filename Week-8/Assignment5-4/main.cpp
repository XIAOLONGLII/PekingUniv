//编程题＃4：找和为K的两个元素
//在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。
// two for loop



#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0, k = 0, m = 0;
    vector<int> my_v;
    vector<bool> true_v;
    
    cout << "Enter how many numbers n and the two number's sum k  ";
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        my_v.push_back(m);
    }
    
    for(int i = 0; i < my_v.size(); i++)
    {
        for (int j = 0; j < my_v.size(); j++)
        {
            if((my_v[i] + my_v[j]) == k)
            {
                true_v.push_back(true);
            }
        }
    }
    if(true_v.size() > 0)
    {
        cout << "yes"<<endl;
    }
    else
    {
        cout << "no" << endl;
    }
    
}
