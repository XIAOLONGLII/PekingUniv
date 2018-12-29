//float double precision is different

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[])
{
    float a = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    float d = a;
    double b = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    double e = b;
    long double  c = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    
    //1. cout defualt precision is 6 digits: 3.14159 3.14159 3.14159
    cout << a << " " << b << " " << c << endl;
    
    //2. 3.1415927410125732421875 after 7 digits, it won't be correct anymore.
    cout << setprecision(100) << d << endl;
    
    // 3. 3.141592653589793115997963468544185161590576171875 after 16 digits, it won't be correct anymore.
    cout << setprecision(100) << e << endl;
    
    
}
