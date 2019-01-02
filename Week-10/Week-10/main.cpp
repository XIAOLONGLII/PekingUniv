// reverse a string
// string s = "hello world!"


#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string s = "Hello world!";
    for(int i = 0; i < s.length() / 2; i++)
    {
        int temp = s[i];
        s[i] = s[ s.length() - i - 1];
        s[ s.length() - i - 1] = temp;
    }
    cout << s << endl;
}
