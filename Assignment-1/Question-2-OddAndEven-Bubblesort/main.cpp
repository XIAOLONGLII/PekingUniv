//
//  main.cpp
//  Question-2-OddAndEven-Bubblesort
//
//  Created by Xiaolong Li on 12/23/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//  Q: 输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。



#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout<<"Use buble sort to re-order odd and even numbers"<<endl;
    int a, arr[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    
    // odd on left, even on right
    int left = 0, right = 9;
    while (left <= right)
    {
        bool leftIsOdd = arr[left] % 2 == 1;
        bool rightIsEven = arr[right] % 2  == 0;
        if(leftIsOdd)
        {
            left++;
        }
        else if(rightIsEven)
        {
            right--;
        }
        else if (!leftIsOdd && !rightIsEven)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    
    cout << "left = " << left << ", Right= " << right<<endl;
    
    // bubble sort ODD
    
    int start = 0, end = left;
    for(int i = start; i < end - 1; i++)
    {
        for(int j = start + 1; j < start + end - i; j++)
        {
            if(arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    
    // bubble sort EVEN
    
    start = left;
    end = 10;
    for(int i = start; i < end - 1; i++)
    {
        for(int j = start + 1; j < start + end - i; j++)
        {
            if( arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    
}
