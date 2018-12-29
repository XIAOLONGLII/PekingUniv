//
//  main.cpp
//  ASCII
//
//  Created by Xiaolong Li on 12/28/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // 1. ASCII
    char a = 64;
    int b = 'Z';
    int c = b - a;
    char d = 1 + 256; //
    cout << a <<" "<< b << " " << c << " " << d <<endl;

    for(int i = 0; i < 10; i++)
    {
        char a = 64;
        a += i;
        cout << a << " " << endl;
    }
    
    // 2.
    cout << "Line \n";
    cout << '\a' << '\\'<<'\n';
    
    // 3. 0 is false, 1 is ture
    bool b1 = true, b2 = false;
    cout << b1 <<" "<< b2<<endl;
  
}
