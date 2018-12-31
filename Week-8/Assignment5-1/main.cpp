//编程题＃1：数字求和

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    //cout << "Enter 6 numbers: "<<endl;
    vector<int> myVec;
    int num = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        myVec.push_back(num);
    }
    int sum = 0;
    for (int i = 1; i < myVec.size(); i++)
    {
        if(myVec[i] < myVec[0])
        {
            sum = sum + myVec[i];
        }
    }
    cout << sum<< endl;
   
}
