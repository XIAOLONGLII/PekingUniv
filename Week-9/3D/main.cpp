//  数组的画作用
//输入20 个0-9的整数，然后算出每个的次数

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, const char * argv[])
{
    //1 
    cout << "Enter 10 0-9 number: " << endl;
    int n;
    int count[10] = { 0 };
    vector<int> v;
    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        for(int j = 0; j < 10; j++)
        {
            if( n == j)
            {
                count[j]++;

            }
        }
    }

    for(int i = 0; i < 10;i++)
    {
        if(count[i] != 0)
        {
            cout << i << " "<<count[i] << endl;
        }
    }
    
    
    // 2
    int num = 0;
    int count1[10] = { 0 };
    
    for(int i = 0; i < 10; i++)
    {
        cin >> num;
        count1[num]++;
    }
    
    
    for(int i = 0; i < 10;i++)
    {
        if(count1[i] != 0)
        {
            cout << i << " "<<count1[i] << endl;
        }
    }
    
    
    
    
    
    
    
    //vector<int> my_vector;
    //vector<int> new_vector;
    //set<int>my_hashset;
    //set<int>::iterator it;
    
//
//    int n = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        cin >> n;
//        my_vector.push_back(n);
//       // my_hashset.insert(n);
//    }
//    int count = 0;
//    int j = 0;
//
//    for(int i = 0; i <my_vector.size(); i++)
//    {
//        for(int j = 0; j < 10; j++)
//        {
//            if(my_vector[i] == j)
//            {
//                new_vector.push_back(j);
//                count[j];
//                j++;
//            }
//        }
//    }
//
//    for(int i = 0; i < new_vector.size(); i++)
//    {
//        cout << i <<" "<< count << endl;
//    }
//
//
    
    
//    int count = 0;
//    for(int i = 0; i < my_vector.size();i++)
//    {
//        for(int j = 0; j < my_vector.size(); j++)
//        {
//            if( my_vector[i] == my_vector[j])
//            {
//                count++;
//                cout << my_vector[i] << " "<<count;
//            }
//        }
//    }
    
    
    
    
    
//    for (int i = 0; i < my_hashset.size(); i++)
//    {
//        cout << my_hashset << " ";
//    }
//
//    for( it = my_hashset.begin(); it != my_hashset.end(); it++)
//    {
//        cout << ' ' << *it;
//    }
//
    
    
    
}
