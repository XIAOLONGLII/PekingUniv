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
    
//    //2
//    cout << "#2" <<endl;
//    float a = 0, b = 0, c = 0; // 初始值
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//    cout << "a = " << a << ",b = "<< b << endl;
//    c = a;
//    a = b;
//    b = c;
//    cout << "a = " << a << ",b = "<< b << endl; // 输出到屏幕上 // endl-》换行
//
//    // 3
//    cout << "#3" <<endl;
//    int x = 0, y = 0;
//    cin >> x >> y;
//    if( x > y) //判断语句
//        cout << "max = " << x << endl;
//    else
//        cout << "max = " << y << endl;
//
//    // 4
//    // == -> equal or not
//    //= -> give value to a variable
//    cout << "#4" <<endl;
//    char d = 'A';
//    cout << "Guess what is me? from A-Z"<<endl;
//    cin >> d;
////    if( d != 'G')
////       cout << " Wrong answer."<<endl;
////    else if(a == 'G')
////       cout << "Bingo, you are right." << endl;
//
//    while( d != 'A')
//    {
//        cout << "wrong";
//        cin >> d;
//    }
//    cout << " Binggo you are right!" <<endl;
//
//    // 5
//    cout << " Odd number in 20 "<<endl;
//    for (int i = 0; i < 20; i++)
//    {
//        if( i % 2 != 0)
//            cout << i << endl;
//    }
//
//    for(int i = 20; i > 0; i--)
//    {
//        if( i % 2 == 0)
//            cout << i << endl;
//    }
//    // 6
//    char z[10] = { 'a','b','c','d','e','f','g','h','i','j'}; // store in ram
//    for(int i = 0; i < 10; i++)
//    {
//        if( i % 2 != 0)
//        {
//            cout << z[i] << endl;
//        }
//    }
    
    // 7: 注释:可读性一定保证，因为别人要读懂。重要因素
    //添加注释 comment， 排版
    char j = ' ';
    cout << "Guess what is my letter, 5 times only. ";
    for(int i = 5; i > 0; i--)
    {
        cin >> j;
        if( j != 'A')
        {
            cout << "Wrong, you have " << i << " times."<<endl;
           
        }
        else
        {
            cout << "You are right now.";
            break;
        }
    
    }
}
