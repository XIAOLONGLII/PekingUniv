//编程题＃2：骑车与走路


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    double open = 27, lock = 23, speed = 3.0;
    double walkSpeed = 1.2;
    
    double c = 0 ;
    c =  ( open + lock ) * 12 / 6;
   //cout << "c= " << c << endl;
    int n = 0;
    //cout << "how many things need to do: ";
    cin >> n;
    int distance = 0;
    vector<int> my_vector;
    for(int i = 0; i < n; i++)
    {
        cin >> distance;
        my_vector.push_back(distance);
    }
    
    for(int i = 0; i < my_vector.size();i++)
    {
        if(my_vector[i] > c )
        {
            cout << "Bike" << endl;
        }
        else
        {
            cout << "Walk" << endl;
        }
        
    }
    
    
    
}
