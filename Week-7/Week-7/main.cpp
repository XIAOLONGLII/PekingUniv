//size of
// hex


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    //1. size of
    cout <<"Short size: "<< sizeof(short) <<" Bytes" << endl;
    cout <<"Int size: "<< sizeof(int) <<" Bytes"<< endl;
    cout <<"Long size: "<< sizeof(long) <<" Bytes"<< endl;
    cout <<"float size: "<< sizeof(float) <<" Bytes"<< endl;
    cout <<"Double size: "<< sizeof(double) <<" Bytes"<< endl;

    int arr[3] = { 1, 2, 3};
    cout << sizeof(arr) << endl;
    short int arr2[3] = { 1 , 2, 3 };
    cout << sizeof(arr2) << endl;
    
    signed int a = 5;
    int b = 5;
    cout << a << endl;
    cout << b << endl;
    
    // 2. hex 16进制
    int c = -123;
    cout <<"十六进制："<<"hex="  << hex << c << endl;
    
    // 3. 8 bit octal 八进制

    cout <<"八进制："<< oct << c << endl;
    
    // 4. dec 回到十进制
    
    cout <<"十进制："<< dec << c << endl;
    
    // 5
    int d = 0x7FFFFF85;
    cout  <<"十进制："<< dec << d << endl;
    cout <<"八进制："<< oct << d << endl;
    
    // 6
    int e = 037777777605;
    cout <<"十进制："<< dec << e << endl;
    cout <<"十六进制："<< hex << e << endl;
 
}
