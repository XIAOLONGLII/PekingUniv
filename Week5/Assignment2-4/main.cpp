//编程题＃4：1的个数
/*
 给定一个十进制整数N，求其对应2进制数中1的个数:
 思考：
 1. 输入L：几行
 2. 每一行的数字用for loop 问
 3. 每一个数字： 5 / 2 = 2 。。。1  2/ 2 = 1.。。 0 1 /2 = 0 。。。 1 ， 101 2 个 1
 
 4. while loop （ n % 2 ！= 0）
    n = n / 2；
    n = n % 2；
    if（n == 1） count++；
 5. 输出

 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    
    // method 1:
    
    int n;
    cout << "Enter a set of integers: "<< endl;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "num of arrays: "<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    
    for(int i = 0; i < n; i++)
    {
        int reminder = 0;
        int numOfOnes = 0;
        if(num[i] <= 0)
        {
            numOfOnes = 0;
        }
        else
        {
            while (num[i] > 0)
            {
                reminder = num[i] % 2;
                num[i] = num[i] / 2;
                //cout <<" Reminder = "<< reminder<<endl;
                
                if( reminder == 1)
                {
                    numOfOnes++;
                }
            }
        }
        cout <<"Number of ones= "<< numOfOnes << endl;
    }
}

 //method 2:
//
//    int n = 0;
//    //int num[n];
//    vector<int> v;
//    cout << "Enter a set of integers: "<< endl;
//    cin >> n;
//    int num;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        v.push_back(num);
//    }
//    cout << "num of arrays: "<< endl;
//    for (int i = 0; i < n; i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//
//
//
//    for(int i = 0; i < n; i++)
//    {
//        int numOfOnes = 0;
//        int reminder = 0;
//
//        if(v[i] <= 0)
//        {
//            numOfOnes = 0;
//        }
//
//        while (v[i] > 0)
//        {
//            reminder = v[i] % 2;
//            v[i] = v[i] / 2;
//            //cout <<" Reminder = "<< reminder<<endl;
//
//            if( reminder == 1)
//            {
//                numOfOnes++;
//            }
//        }
//        cout <<"Number of ones= "<< numOfOnes << endl;
//    }






//method 3:

//    cout << "How many numbers: "<<endl;
//    int a;
//    cin >> a;
//    for(int i = 0; i < a; i++)
//    {
//        int x, countOne = 0;
//        int reminder = 0;
//        cin >> x;
//        while (x > 0)
//        {
//            reminder = x % 2;
//            countOne = countOne + reminder;
//            x = x / 2;
//        }
//        cout << countOne << endl;
//    }
    
   

