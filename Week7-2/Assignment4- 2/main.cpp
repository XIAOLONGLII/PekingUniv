//编程题＃2：成绩判断
//switch

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    //cout << "Input 0-100" << endl;
    int grade;
    cin >> grade;
    int result = 0;
    if( grade >= 95 && grade <= 100)
        result = 1;
    else if (grade >=90 && grade < 95)
        result = 2;
    else if (grade >= 85 && grade < 90)
        result = 3;
    else if (grade >= 80 && grade < 85)
        result = 4;
    
    else if (grade >= 70 && grade < 80)
        result = 5;
    
    else if (grade >= 60 && grade < 70)
        result = 6;
    else
        result = 7;
    
    cout << result << endl;
    
    
    
}
