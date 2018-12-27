//编程题＃5：分离整数的各个数位

/*
 1. 3 digits number.
 2. 123
 3.
 
 */


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int number;
    cout << "Enter a 3 digits number" << endl;
    cin >> number;
    vector<int> v;
    while( number > 0)
    {
        
        int re = number % 10;
        v.push_back(re);
        number = number / 10;
    }
    
    for(int i = v.size() - 1; i >= 0 ;i--)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}
