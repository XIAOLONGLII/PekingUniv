//
//  main.cpp
//  Week-11
//
//  Created by Xiaolong Li on 12/31/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // /0
    char c[] = "NewYork";
    // N e w Y o r k_   total 8 not 7, even this is 7 digits.
    int a = sizeof(c) / sizeof(c[0]);
    cout << a << endl;
    
    for(int i = 0; i < a; i++)
    {
        cout << c[i] << endl;
    }
    
    // 2
    char str1[] = "Happ new year 2019";
    char str2[20];
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    cout <<"Str1 = "<< str1 << endl;
    cout <<"Str2 = "<< str2 << endl;
    
    // 3
    int c1, d;
    cin >> c1 >> d;
    
    // read data from cin
    float grade = 0;
    cout << "enter grade";
    while (cin >> grade)
    {
        if(grade >= 85)
            cout << "Good"<<endl;
        else
            cout << "Fail"<<endl;
        cout << "Enter grade:";
    }
    return 0;
    
    
    
}
