// assignment-2 晶晶赴约会

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // 1 -7: Monday - Sunday
    // jing jing: arrNo = { 1, 3, 5}; arrYes = { 2, 4 , 6}
    // if the number is in arrNo, then print No
    // if the number is in arrYES, then print Yes
    
    int date = 0;
    cin >> date;
    
    string s = "";
    if( date % 2 == 0 && date  <= 7 && date  >= 1)
    {
        s = "YES";
    }
    else
    {
        s="NO";
    }
    cout << s << endl;
}
