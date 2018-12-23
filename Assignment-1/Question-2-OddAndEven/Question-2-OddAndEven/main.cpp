//
//  main.cpp
//  Question-2-OddAndEven
//
//  Created by Xiaolong Li on 12/23/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//  题：输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, arr[10];
    cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> a;
        arr[i] = a;
    }
    for(int i = 0; i < 10; i++)
    {
        if( arr[i] % 2 != 0)
        {
             cout << arr[i]<<" ";
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if( arr[i] % 2 == 0)
        {
            cout << arr[i]<<" ";
        }
    }
    
    return 0;
}
