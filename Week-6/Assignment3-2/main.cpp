//  Assignment3-2
//编程题＃1：苹果和虫子

/*思考
 1。n个苹果
 2. n- y/x 苹果数
 3. if y%x ！= 0 y/x = y / x + 1；
 
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, x, y;
    //cout << "How many apples total:  and what is x and  y"<< endl;
    cin >> n >> x >> y;
    
    int applesEat = y / x;
    
    if( y % x != 0)
    {
        applesEat++;
    }
    if (applesEat > n)
    {
        cout << 0;
    }
    else
    {
        cout << n - applesEat;
    }
    cout << endl;
}
