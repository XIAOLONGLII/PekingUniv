//
//  main.cpp
//  week5-example1
//
//  Created by Xiaolong Li on 12/23/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //1 -> 1 + 1
    //2 -> 2 + 2
    //3 -> 2 + 2 + 3 = 7
    //4 -> 2 + 2 + 3 + 4 = 11
    //n -> total(n-1) + n
    // 1 + 1 + 2 + 3 + .... +n
    
    int n = 0, pizza = 1;
    cout << "How many cuts? "<< endl;
    cin >> n;
    pizza = 1;
    for (int i = 1; i < n; i++)
    {
        pizza = pizza + i;
    }
    cout << "Total pizza is: "<< pizza << endl;
    
    
    return 0;
}
