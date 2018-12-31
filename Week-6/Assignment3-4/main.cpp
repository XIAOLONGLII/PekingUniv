//编程题＃3：最高的分数
/*
 max

 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    int grade;
    vector<int> v;
    
    //cout << "How many students: "<<endl;
    cin >> n;
    
    //cout << "Enter the grades: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> grade;
        v.push_back(grade);
    }
    int max = v[0];
    for (int i = 0; i< v.size(); i++)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
    }
    cout << max << endl;
}
