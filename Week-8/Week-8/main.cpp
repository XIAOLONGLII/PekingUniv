

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int a = 64.1234; // a double actually
    char c = a;  // ASCII 64
    float f = c; // 64.0000
    bool b = f;  // not zero so it is 1.
    cout << showpoint<<"a=" <<a<<" c="<< " " << c <<" f="<< " "<< f <<" b="<<b <<" "<<endl;
    
    
    //2.
    int x = 3, y = 5;
    cout << x&&y;
    cout << x||y;
    
    //3 条件运算符
    int max = (x > y) ?x:y;
    cout << "max = " << max << endl;
    

    //4
    int v = x&y;
    int v2 = x|y;
    cout << "v= "<< v<<endl;
    cout << "v2= "<< v2 <<endl;
    
    int n = 0, m = 1;
    cout << n++ << " "<< n << endl;
    cout << ++m  << " "<< m << endl;
    int l = m = n;
    cout << l << endl;
    
    

   
}
