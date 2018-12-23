//
//  main.cpp
//  Assignment-1
//
//  Created by Xiaolong Li on 12/23/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, a[1000]; // n integers, n is not more than 1000, a is a collection
    cout << "Enter n numbers: "<<endl;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    //冒泡，不断比较相邻的两个数，如果顺序出错（前大于后）， 就换位
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 1; j < n - i; j++)
        {
            if(a[j - 1] > a[j])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    cout << "After bubble sort: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    
    
    
    
    return 0;
}
