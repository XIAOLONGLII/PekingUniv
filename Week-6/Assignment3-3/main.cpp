//  Assignment3-3
// 编程题＃2：大象喝水

/*
 20升 = 20x 10^3毫升 = 20x 10^3 cm^3
 cube = r^ 2 *  h
 
 */

#include <iostream>
#include <math.h>
using namespace std;

const double VOLUME = 20000;
const double pi = 3.1415926535897;

int main(int argc, const char * argv[])
{
    //cout << "Enter r and h: "<< endl;
    double r, h, volume;
    cin >> h >> r;
    volume = pi * pow(r,2) * h;
    //cout << volume << endl;
    int num = VOLUME / volume;

    if (remainder(VOLUME, volume) != 0){
        num++;
    }
    cout << num << endl;
}
