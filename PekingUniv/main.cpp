//
//  main.cpp
//  PekingUniv
//
//  Created by Xiaolong Li on 12/23/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //2
    float a = 0, b = 0, c = 0; // 初始值
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "a = " << a << ",b = "<< b << endl;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << ",b = "<< b << endl; // 输出到屏幕上 // endl-》换行
    
    // 3
    int x = 0, y = 0;
    cin >> x >> y;
    if( x > y) //判断语句
        cout << "max = " << x << endl;
    else
        cout << "max = " << y << endl;
    
}
