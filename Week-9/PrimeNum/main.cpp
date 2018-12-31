//
// smaller than 100 prime number
// 3 % 3 == 0
// vector

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    // smaller than 100 prime number
    //
    vector<int> prime_vector;
    bool isPrime = true;
    for(int i = 2; i < 10000; i++)
    {
        isPrime = true;
        for(int j = 2; j < i; j++)
        {
            if(  i % j == 0 )
            {
                isPrime = false;
            }
        }
        if(isPrime == true)
        {
            //1.  the prime numbers within 100
            //cout << i<< endl;
            
            
            
            //2.  the first 100 prime number
            prime_vector.push_back(i);
        }
    }
    for(int i = 0; i < 100; i++)
    {
        cout << prime_vector[i] << " ";
    }
    
    
    //cout << 3 %  << endl;
    
    
    
    
    
    //2.
    
    int num1 = 0, arr[100] = { 0 };
    for(int i = 2; i < sqrt(100.0); i++)
    {
        num1 = i;
        if(arr[num1] == 0 )
        {
            while (num1 < 100)
            {
                num1  = num1 + i;
                if( num1 < 100)
                {
                    arr[num1] = 1;
                }
            }
        }
    }
    cout << endl;
    cout << "Within 100 prime numbers: " << endl;
    
    for(int i = 2; i < 100; i++)
    {
        if(arr[i] == 0)
        {
            cout << i << " ";
        }
    }
    
}
