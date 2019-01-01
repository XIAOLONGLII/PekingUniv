//编程题＃5：自整除数
//对一个整数n,如果其各个位数的数字相加得到的数m能整除n
//则称n为自整除数.例如21,21%(2+1)==0,所以21是自整除数.
//现求出从10到n(n < 100)之间的所有自整除数.

//1. 求出余数 相加 起来。
//2。然后相处
//3.放在array
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    
    int sum;
    vector<int> my_vector;
    vector<int> vec1;
    int n = 0;
    //cout << "The range: ";
    cin >> n;
    for(int i = 10; i <= n; i++)
    {
        vec1.push_back(i);
    }
    
    for(int i = 0; i < vec1.size();i++)
    {
        sum = 0;
        int temp = vec1[i];
        while (vec1[i] != 0)
        {
            int reminder = vec1[i] % 10;
            vec1[i] = vec1[i] / 10;
            sum = sum + reminder;
        }
        //cout << temp<< endl;
        //cout << "sum = " << sum << endl;
        if( temp % sum == 0)
        {
            my_vector.push_back(temp);
        }
    }

        for(int i = 0; i < my_vector.size(); i++)
        {
            cout << my_vector[i] << endl;
        }
    
}


