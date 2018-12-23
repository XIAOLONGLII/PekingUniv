//
//  main.cpp
//  Question-3-OddAndEven
//
//  Created by Xiaolong Li on 12/23/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
// Bubble sort first then order odd and even

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[10];
    cout << "Enter 10 numbers: "<<endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    //bubblesort
    for(int i = 0; i < 10 - 1; i++)
    {
        for(int j = 1; j < 10 - i; j++)
        {
            
            bool leftIsEven = arr[ j - 1] % 2 == 0;
            bool rightIsEven = arr[j] % 2 == 0;
            if((leftIsEven && !rightIsEven)||(leftIsEven == rightIsEven && arr[j - 1] > arr[j]))
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
