//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    cout << "Enter yuan bianhao he xi bianhao ";
    int teacher[20][12];
    char name[30];
    int school, department;
    for(int i = 0; i < 1000; i++)
    {
        cin >> name >> school >> department;
        teacher[school][department]++;
    }
    
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout << teacher[i][j];
        }
    }
    
}
