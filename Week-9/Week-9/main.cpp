// 2D
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[3][4] = { 0};
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr[i][j] = 4* i + j + 1;
        }
    }
    
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout <<setw(3)<< arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
