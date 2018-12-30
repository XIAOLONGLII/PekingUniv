//编程题＃4：人民币支付
/*
 思考：
 1. 735 / 100 = 7 。。。 35
 2. 35 《 50， 35 》 10
 3. range
 
 4. 1340 % 100 = 13
 
 */

#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    //cout << "Enter a money ";
    int money = 0;
    cin >> money;
    int c100= 0, c50 = 0,c20 = 0,c10 = 0,c5 = 0,c1 = 0;
    
    while (money > 0)
    {
        c100 = money / 100;
        money = money % 100;
        
        c50 = money / 50;
        money = money % 50;
        
        c20 = money / 20;
        money = money % 20;
        
        c10 = money / 10;
        money = money % 10;
        
        c5 = money / 5;
        money = money % 5;
        
        c1 = money / 1;
        money = money % 1;
    }
    
    cout << c100<<"\n"<<c50<<"\n"<<c20<<"\n"<<c10<<"\n"<<c5<<"\n"<<c1<<endl;
    
}
