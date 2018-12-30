//成绩用switch例子。

//90-100 :A
//80-90 : B
//70-80 : C
//60-70 : D
// < 60 : F

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int score = 0;
    cout <<"Input your score: "<<endl;
    cin >> score;
    int rate = score / 10;
    switch (rate) {
        case 9:
            cout << "A";
            break;
        case 8:
            cout << "B";
            break;
        case 7:
            cout << "C";
            break;
        case 6:
            cout << "D";
            break;
        default:
            cout << "F";
            break;
    }
}
