//do while loop -> do first then see while loop

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int i, sum = 0;
    i = 1;
    do
    {
        sum = sum + i;
        i++;
    }while (i <= 100);
    
    cout << sum << endl;
    
    int n = 0;
    for(;;)
    {
        cin >> n;
        if(n == 0)
            break;
    }
    
    
    
    
}
