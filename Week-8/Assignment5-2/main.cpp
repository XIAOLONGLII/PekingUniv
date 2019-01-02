//编程题＃2：骑车与走路
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    double open = 27, lock = 23, bikeSpeed = 3.0;
    double walkSpeed = 1.2;
    
    int n = 0;
    //cout << "how many things need to do: ";
    cin >> n;
    double distance = 0;
    vector<string> my_vector;
    string status = "";
    for(int i = 0; i < n; i++)
    {
        cin >> distance;
        double time_bike = distance / bikeSpeed + open + lock;
        double time_walk = distance / walkSpeed;
        
        if( time_bike > time_walk)
        {
            status = "Walk";
            my_vector.push_back(status);
        }
        else if(time_bike < time_walk)
        {
            status = "Bike";
            my_vector.push_back(status);
        }
        else
        {
            status = "All";
            my_vector.push_back(status);
        }
    }
    
    for(int i = 0; i < my_vector.size();i++)
    {
        cout << my_vector[i]<<endl;
    }
}
