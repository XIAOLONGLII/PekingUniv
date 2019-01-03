//编程题＃2：忽略大小写比较字符串大小

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string to_lower( string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(int argc, const char * argv[])
{
    
    char s[80];
    vector<string> my_vec;
    vector<string> lower_vec;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < 2; i++)
    {
        cin.getline(s,80);
        my_vec.push_back(s);
    }
   
    for(int i = 0; i < my_vec.size();i++)
    {
        //cout << to_lower(my_vec[i]) << endl;
        lower_vec.push_back(to_lower(my_vec[i]));
    }

    
    int le1 = lower_vec[0].length();
    int le2 = lower_vec[1].length();
    
    // hello
    // HI
    if(le1 > le2)
    {
        for(int i = 0; i < le2; i++)
        {
            count1 = count1 + lower_vec[0][i];
        }
        for(int i = 0; i < le2; i++)
        {
            count2 = count2 + lower_vec[1][i];
        }
    }
    else if(le1 < le2)
    {
        for(int i = 0; i < le1; i++)
        {
            count1 = count1 + lower_vec[0][i];
        }
        for(int i = 0; i < le1; i++)
        {
            count2 = count2 + lower_vec[1][i];
        }
    }
    
    
    
    if(( count1 > count2) || ( count1 == count2 && le1 > le2))
    {
        cout << ">" <<endl;
    }
    else if((count1 < count2) ||( count1 == count2 && le1 < le2))
    {
        cout << "<" << endl;
    }
    else if( count1 == count2 && le1 == le2)
    {
        cout << "=" <<endl;
    }

}
