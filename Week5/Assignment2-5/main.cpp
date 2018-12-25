//编程题＃5：数组逆序重放
/*思考：
 1. 逆序： 如果之前是increase，现在就是decrease
 2. 如果之前是decrease，现在是increase
 3. Use bubble sort
 4. Use insertion sort
 5. Output
 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int n, num;
    vector<int> vec;
    cout << "Input a serial of numbers "<<endl;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    //1. insertion sort
//    for (int i = 0; i < vec.size(); i++)
//    {
//        for(int j = i; j < vec.size(); j++)
//        {
//            if(vec[i] > vec[j])
//            {
//                int temp = vec[i];
//                vec[i] = vec[j];
//                vec[j] = temp;
//            }
//            else
//            {
//                int temp = vec[j];
//                vec[j] = vec[i];
//                vec[i] = temp;
//            }
//        }
//    }
    
    //2. bubble sort
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 1; j < vec.size() - i; j++)
        {
            if(vec[j - 1] > vec[j])
            {
                int temp = vec[j -1];
                vec[j -1] = vec[j];
                vec[j] = temp;
            }
            else
            {
                int temp = vec[j];
                vec[j] = vec[j - 1];
                vec[j - 1] = temp;
            }
        }
    }
    
    
    
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    
    
}
