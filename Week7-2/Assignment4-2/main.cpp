//抄写题＃2：分数求和
/*
 思考：
 1. 输入几个数，让user输入
 2. 用for loop 输入n个分数
 3. 分数是分子和分母 f【0，1】
 4. 先相加
 5. 在约分
 
 
 
 */

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumn = 0, sumd = 1;
    while (n--) {
        int num, deno;
        char slash;//专门用来吃掉/的
        cin >> num >> slash >> deno;
        //先相加 a/b + c/d = (a*d+c*b)/(b*d)
        sumn = sumn*deno + num*sumd;
        sumd = sumd*deno;
    }
    //后约分
    //先求最大公约数gcd，这里用的是欧几里得法
    int a = sumd, b = sumn, c;
    while (a != 0) {
        c = a; a = b%a; b = c;
    }
    int gcd = b;
    //分子分母同时除以gcd就可以完成约分
    sumd /= gcd;
    sumn /= gcd;
    if (sumd > 1)
        cout << sumn << '/' << sumd << endl;
    else
        cout << sumn << endl;
    return 0;
}


