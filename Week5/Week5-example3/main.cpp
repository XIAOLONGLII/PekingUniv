//百元买鸡问题
//little chiken 0.5 yuan, male chicken: 2 yuan, femal chicken : 3 yuan
//Total money: 100 yuan. Need to buy 100 chicken
// all possible cases.


/* Plan 1:
 100 / 0.5 = 200;
 100 / 2 = 50;
 100 / 3 = 33.3
 
 0.5x + 2y + 3z = 100
 
 
 x = 2 -> 98
 98 x 2 = 196(yuan)
 
 x = 10 -> 90
 90 x 2 = 180
 
 x = 20 -> 80(zhi)
 80 x 2 = 160
 ...
 
 x = 50 -> 50(zhi)
 50 x 2 = 100 (yuan)
 
 x = 60 -> 40
  60 x0.5 = 30
 100 - 30 = 70.
 40 x2 =80 > 70 (NO)
 
 x = 70 70 x0.5 = 35, 100-35 = 65
 30zhi
 
 2y + 3z = 65
 y + z = 30
 3y + 3z = 90
 
 x=70   x0.5 = 35
 y = 25 x2   = 50
 z = 5  x3   = 15



 Plan 2:
 
 x + y + z = 100 -> 0.5*(x+y+z) = 50
 0.5x + 2y + 3z = 100
 
 1.5y + 2.5z = 50
 15y +25z = 500
 3y + 5z = 100
 3y = 100 - 5z
 y = (100 - 5z ) / 3
 
 x + (100 - 5z) /3 + z = 100
 3x + 100 - 5z + 3z = 300
 3x -2z = 200
 3x = 200-2z
 x = (200 -2z) / 3
 
 
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // plan 1:
    cout << "Plan 1" <<endl;
    int x,y,z;
    for(x = 0; x <= 33; x++)
    {
        for(y = 0; y <= 50; y++)
        {
            for(z = 0; z <=100; z++)
            {
                if(( x + y + z) == 100)
                {
                    if(( 3 * x + 2* y + 0.5 * z) == 100)
                    {
                        cout <<"little chiken: "<< z<<" male chicken: "<<y<<" femal chicken: "<<x<<endl;
                    }
                }
            }
        }
    }
    
    //plan 2:
    cout << "Plan 2" <<endl;
    
    int a, b, c;
    for(a = 0; a <= 33; a++)
    {
        for(b = 0; b <= 50; b++)
        {
            c = 100 - a - b;
            if(( 3*a + 2*b + 0.5*c ) == 100)
            {
                cout <<"little chiken: "<< c<<" male chicken: "<<b<<" femal chicken: "<<a<<endl;

            }
        }
    }
    
    
    
    
    
}
