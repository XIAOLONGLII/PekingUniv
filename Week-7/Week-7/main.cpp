//
//  main.cpp
//  Week-7
//
//  Created by Xiaolong Li on 12/27/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    cout <<"Short size: "<< sizeof(short) <<" Bytes" << endl;
    cout <<"Int size: "<< sizeof(int) <<" Bytes"<< endl;
    cout <<"Long size: "<< sizeof(long) <<" Bytes"<< endl;
    cout <<"float size: "<< sizeof(float) <<" Bytes"<< endl;
    cout <<"Double size: "<< sizeof(double) <<" Bytes"<< endl;

    int arr[3] = { 1, 2, 3};
    cout << sizeof(arr) << endl;
    short int arr2[3] = { 1 , 2, 3 };
    cout << sizeof(arr2) << endl;
    
    signed int a = 5;
    int b = 5;
    cout << a << endl;
    cout << b << endl;
    

    
   
}
