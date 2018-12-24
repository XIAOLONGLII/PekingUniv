//Sort
// sort {23,34,65,67,12,67,341,61,34}

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    /*method 1,
     bubble sort
     
     compare the one next to each other, then the biggest one goes to the last one,
     then the second largest one (biggest one in rest of array)
     repeat..
     ....
     */
    int arr[9] = {23,34,65,67,12,67,341,61,34};
    int arr1[10] = {11,23,34,65,67,12,67,341,61,34};
    int size = sizeof(arr)/sizeof(arr[0]);
     int size1 = sizeof(arr1)/sizeof(arr1[0]);
    
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 1; j < size - i; j++)
        {
            if( arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    // method 2:
    //选择排序 (selection sort)
    for(int i = 0; i < size1 - 1 ; i++)
    {
        for(int j = i + 1; j < size1; j++)
        {
            if( arr1[i] < arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}
