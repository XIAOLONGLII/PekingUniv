// Q：10个数，奇数放入arr1 偶数放入arr2

/*plan:
 
 Ask user 10 integers
 arr1 = [odd]
 arr2 = [even]
 
 create two arrays
 then check each number then put in each arr
 */


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    //method1:

    int num, j = 0, k = 0;
    int arrOdd[10];
    int arrEven[10];
    vector<int> v;
    cout << "Can you enter a set of 10 integers? ";
    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        if( num % 2 == 0)
        {
            arrEven[j] = num;
            j++;
        }
        else
        {
            
            arrOdd[k] = num;
            k++;
        }
    }
    
    for(int i = 0; i < j; i++)
    {
        cout << arrEven[i] <<" ";
        
    }
    cout << endl;
    for(int i = 0; i < k; i++)
    {
        cout << arrOdd[i] <<" ";
        
    }
    
    cout << endl;
    // method2:
    
    
    vector<int> v1;
    vector<int> v2;
    int num1;
    cout << "Can you enter a set of 10 integers? ";
    
    for(int i = 0; i < 10; i++)
    {
        cin >> num1;
        if( num1 % 2 == 0)
        {
            v1.push_back(num1);
        }
        else
        {
            v2.push_back(num1);
        }
    }
    
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] <<" ";
        
    }
    cout << endl;
    
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] <<" ";
        
    }
    
}
