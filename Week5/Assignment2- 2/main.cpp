//编程题＃2：奇数求和

// 3 12 -> 3 + 5 + 7 + 9 + 11
// find out all odd numbers from n to m, then add them together
// in a array
// sum

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // method 1:
    cout << "Enter a range: "<<endl;
    int n, m;
    cin >> n >> m;
    vector<int> odd;
    for(int i = n; i <= m; i++)
    {
        if( i % 2 != 0)
        {
            odd.push_back(i);
        }
    }
    int sum = 0;
    for(int i = 0; i < odd.size();i++)
    {
        sum = sum + odd[i];
    }
    cout << "Sum = " << sum << endl;
    
    // method 2:
    
    
    
}
