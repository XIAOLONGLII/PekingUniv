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
            
            /*1.
                 i = 0, j = 1 ... 10
                 i = { 0...8}
             j = { 1..9}
                 arr[j - 1] > arr[j]
                 j = 1, arr[ 0] > arr[1], swap
                 j = 2, arr[1] > arr[2], swap
                 j =3 , 4 5 6 7 8
                 the biggest one will be at the last.
                 after i = 0, it will be look like: 9,8,7,6,5,4,3,2,1,10
             */
            
            /*2.
                i = 1, j = 1....9
                i = {1...8}
                j = {1..8}
                arr[j-1] = arr[0,1,2,3,4,5,6,7]
             after i = 1; it will be: 8,7,6,5,4,3,2,1,9,10
       
             
             
             ...
             
             i = 8, it will be
             1, 2, 3, 4, 5, 6, 7, 8, 9, 10
             
             
            */
            
            
            
            // i = 1, j = 1...9
            //{2,3,4,5,6,7,8,9}
            //arr[
            
            
            
            
            
            // i = 2, j = 1...8
            // i = 3, j = 1.
            
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
