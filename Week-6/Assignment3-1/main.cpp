//
//  main.cpp
//  Assignment3-1
//
//  Created by Xiaolong Li on 12/26/18.
//  Copyright © 2018 Xiaolong Li. All rights reserved.
//


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int numOfPlates, ID;
    int numOfBBefore,numofBAfter;
    vector<int> ID_vector;
    vector<int> rate_vector;
    
    cin >> numOfPlates;
    for(int i = 0; i < numOfPlates; i++)
    {
       
        cin >> ID >> numOfBBefore >> numofBAfter;
        ID_vector.push_back(ID);
        double rate = numofBAfter / numOfBBefore;
        rate_vector.push_back(rate);
    }
  
    // sort rate
    int size = rate_vector.size();
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j < size - i - 1; j++)
        {
            if(rate_vector[j - 1] < rate_vector[j])
            {
                int tempID = ID_vector[ j - 1];
                ID_vector[ j - 1] = ID_vector[j];
                ID_vector[j] = tempID;
                
                int temp = rate_vector[ j - 1];
                rate_vector[ j - 1] = rate_vector[j];
                rate_vector[j] = temp;
            }
        }
    }
   
 // the max difference
    int maxDiff = 0;
    int maxDiffIndex = 0;
    for (int i = 0; i < rate_vector.size() - 1; i++)
    {
        int diff = rate_vector[i] - rate_vector[i + 1];
        if(  maxDiff < diff )
        {
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }
   
    cout << maxDiffIndex + 1 << endl;
    for(int i = maxDiffIndex; i >= 0; i--)
    {
        cout << ID_vector[i] << endl;
    }
    cout << numOfPlates - maxDiffIndex - 1 << endl;
    for(int i = numOfPlates - 1; i >= maxDiffIndex + 1; i--)
    {
        cout << ID_vector[i] << endl;
    }
   
}
