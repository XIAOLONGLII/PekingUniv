//Q: 10个数，奇数从大到小，偶数从小到大

// seperated with Odd and Even first, then sort.
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int num[10];
    int arrOdd[10], arrEven[10];
    int numOfOdd = 0, numOfEven = 0;
    //1. input
    cout << "Input 10 numbers: "<< endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    cout <<"Your number is: "<<endl;
    //2. sperate even and odd
    for(int i = 0; i < 10; i++)
    {
       if(num[i] % 2 == 0)
       {
           arrEven[numOfEven] = num[i];
           numOfEven++;
       }
       else
       {
           arrOdd[numOfOdd] = num[i];
           numOfOdd++;
       }
    }
    // 3. odd sort
    for(int i = 0; i < numOfOdd - 1; i++)
    {
        for(int j = 1; j < numOfOdd - i; j++)
        {
            if(arrOdd[j - 1] < arrOdd[j])
            {
                int temp = arrOdd[j - 1];
                arrOdd[j - 1] = arrOdd[j];
                arrOdd[j] = temp;
            }
        }
        
    }
    
    // 4. even sort
    
    for(int i = 0; i < numOfEven - 1; i++)
    {
        for(int j = 1; j < numOfEven - i; j++)
        {
            if(arrEven[j - 1] > arrEven[j])
            {
                int temp = arrEven[j - 1];
                arrEven[ j - 1] = arrEven[j];
                arrEven[j] = temp;
            }
        }
    }
    //5. print Output
    
    for(int i = 0; i < numOfOdd; i++)
    {
        cout << arrOdd[i] << " ";
    }
    for(int i = 0; i < numOfEven; i++)
    {
        cout << arrEven[i] << " ";
    }
    
    cout << endl;
    
}
