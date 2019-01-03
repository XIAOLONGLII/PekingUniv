//编程题＃1：求字母的个数

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
//    string s;
//    getline(cin, s);
    char s[80];
    cin.getline(s,80);
    //cout << s << endl;
    // a e i o u
    int Le = 80;
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    int item = 0;
    while (i != Le)
    {
        if(s[item] == 'a') a++;
        else if(s[item] == 'e') e++;
        else if (s[item] == 'i') i++;
        else if (s[item] == 'o') o++;
        else if (s[item] == 'u') u++;
        item++;
        Le--;
    }
    cout << a <<" "<<e<<" "<<i<<" "<<o <<" "<<u << endl;
}
