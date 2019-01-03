

#include <iostream>
using namespace std;
float max (int a, int b)
{
    if( a > b ) return a;
    else    return b;
}

int main(int argc, const char * argv[])
{
    int m = 3, n = 4;
    float result = 0;
    result = max( m, n);
    cout << result << endl;
    
}
