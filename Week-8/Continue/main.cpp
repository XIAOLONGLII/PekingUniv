//Continue usage:

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    for(int i = 1; i <= 100; i++)
    {
        if( i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
}
