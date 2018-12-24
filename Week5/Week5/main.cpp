//  q: 鸡兔同笼问题

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int collectionOfLegs = 0;
    int legs = 0;
    int maxAni = 0, minAni = 0;
    cout << "How many sets of legs you want to verify: ";
    cin >> collectionOfLegs;
    
    for(int i = 0; i < collectionOfLegs; i++)
    {
        cin >> legs;
        if( legs % 2 != 0 || legs <= 0)
        {
            cout << 0 <<' '<< 0<<endl;
            
        }
        else
        {
            maxAni = legs / 2;
            if(legs % 4 == 0)
            {
                minAni = legs / 4;
            }
            else
            {
                minAni = legs / 4 + 1;
            }
        }
    }
    cout << minAni << " " << maxAni<< endl;
    return 0;
}
