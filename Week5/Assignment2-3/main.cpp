//编程题＃3：整数的个数
/* 思考：
 1. 输入 k
 2. for loop 问每个数 是多少
 3. 放入array
 4. count 如果是5 count++；
 5. print
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int k;
    int countOne = 0, countFive = 0, countTen = 0;
    cout << "Please input K numbers: "<<endl;
    cin >> k;
    int arr[k];
    for(int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        if(arr[i] == 1)
        {
            countOne++;
        }
        else if(arr[i] == 5)
        {
            countFive++;
        }
        else if (arr[i] == 10)
        {
            countTen++;
        }
    }
    cout << countOne << "\n"<< countFive << "\n"<<countTen<<endl;
    
    
}
