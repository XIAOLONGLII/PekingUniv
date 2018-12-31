//编程题＃4：最大奇数与最小偶数之差的绝对值
/*
 1. 6 numbers, at least 1 odd and 1 even
 2. maxOdd: a, minEven: b
 3. abs(a - b)
 
 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int num;
    vector<int> odd;
    vector<int> even;
    
    //cout<< "Input 6 integers: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        if( num % 2 != 0)
        {
            odd.push_back(num);
        }
        else
        {
            even.push_back(num);
        }
        
    }
    int oddMax = odd[0];
    int evenMax = even[0];
    for (int i = 0; i < odd.size(); i++)
    {
        if( odd[i] > oddMax)
        {
            oddMax = odd[i];
        }
    }
    
    for (int i = 0; i< even.size(); i++)
    {
        if(even[i] < evenMax)
        {
            evenMax = even[i];
        }
    }
//    cout /*<< "Max odd = "*/ << oddMax << endl;
//    cout /*<< "Max even = " */<< evenMax << endl;
    cout /* << "difference is = " */<< abs(oddMax - evenMax) << endl;
  
}
