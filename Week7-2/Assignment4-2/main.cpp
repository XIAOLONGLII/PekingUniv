//抄写题＃2：分数求和
/*
 思考：
 1. 输入几个数，让user输入
 2. 用for loop 输入n个分数
 3. 分数是分子和分母 f【0，1】
 4. 先相加
 5. 在约分
 
 
 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;;
    cin >> n;
    int sumn =0, sumd = 1;
    while(n--)
    {
        int num, deno;
        char slash;
        cin >> num >>slash>>deno;
        sumn = sumn*deno + num *sumd;
        sumd = sumd*deno;
    }
    
    int a = sumd, b = sumn, c;
    while( a != 0)
    {
        c = a;
        a = b%a;
        b = c;
    }
    int gcd = b;
    sumd /= gcd;
    sumn /= gcd;
    if(sumd > 1)
        cout << sumn << '/'<<sumd << endl;
    else
        cout << sumn << endl;
    
}
