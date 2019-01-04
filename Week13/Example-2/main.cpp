//

#include <iostream>
using namespace std;
void delay(int n )
{
    for(int i = 0; i < n * 100000; i++)
    {
        return;
    }
}
void show()
{
    cout << "********************************"<<endl;
    cout << "             Error              "<<endl;
    cout << "********************************"<<endl;
}

int main(int argc, const char * argv[])
{
    for(int i = 0; i < 100; i++)
    {
        cout << i << endl;
    }
    show();
}
