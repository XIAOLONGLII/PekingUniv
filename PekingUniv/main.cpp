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
    cout << "#2" <<endl;
    float a = 0, b = 0, c = 0; // 初始值
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "a = " << a << ",b = "<< b << endl;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << ",b = "<< b << endl; // 输出到屏幕上 // endl-》换行
    
    // 3
    cout << "#3" <<endl;
    int x = 0, y = 0;
    cin >> x >> y;
    if( x > y) //判断语句
        cout << "max = " << x << endl;
    else
        cout << "max = " << y << endl;
    
    // 4
    // == -> equal or not
    //= -> give value to a variable
    cout << "#4" <<endl;
    char d = 'A';
    cout << "Guess what is me? from A-Z"<<endl;
    cin >> d;
//    if( d != 'G')
//       cout << " Wrong answer."<<endl;
//    else if(a == 'G')
//       cout << "Bingo, you are right." << endl;
    
    while( d != 'A')
    {
        cout << "wrong";
        cin >> d;
    }
    cout << " Binggo you are right!" <<endl;
    
    // 5
    cout << " Odd number in 20 "<<endl;
    for (int i = 0; i < 20; i++)
    {
        if( i % 2 != 0)
            cout << i << endl;
    }
    
}
