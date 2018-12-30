//编程题＃3：找出第k大的数
/*
  思考：
 1. 第1大，max
 2. 第二大，secondmax
 3. 第N大，
 
 */


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    //cout << "N numbers: "<<endl;
    int n = 0;
    cin >> n;
    int N = 0;
    //cout << "Nth largest number: "<<endl;
    cin >> N;
    int m = 0;
    vector<int> my_vector;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        my_vector.push_back(m);
    }
    // sort
    
    for(int i = 0; i < my_vector.size() - 1; i++)
    {
        for(int j = 1; j < my_vector.size() - i; j++)
        {
            if(my_vector[j - 1] < my_vector[j])
            {
                int temp = my_vector[j - 1];
                my_vector[j - 1] = my_vector[j];
                my_vector[j] = temp;
            }
        }
    }
    
//    for(int i = 0; i < my_vector.size();i++)
//    {
//        cout << my_vector[i] << " ";
//    }
//    
    
    cout << my_vector[N - 1]<< endl;
    
    
    
}
