////编程题＃3：最长单词2


#include <iostream>
#include <string>
using namespace std;

string LongestWord(string str) {
    string tempstring;
    string maxword;
    int len = str.length();
    
    for (int i = 0; i<=len; i++) {
        
        if (tempstring.length()>maxword.length())
        {
            maxword = tempstring;
        }
        if (str[i]!=' ')
        {
            tempstring = tempstring + str[i];
        }
        else
        {
            tempstring = '\0';
        }
    }
    return maxword;
    
}
string LongestWord2(string str)
{
    string temp;
    string maxWord;
    int len = str.size();
    for(int i = 0; i < len; i++)
    {
      
        if(str[i] != ' ')
        {
            temp = temp + str[i];
        }
        else
        {
            temp = '\0';
        }
        
        if(temp.length() > maxWord.length())
        {
            maxWord = temp;
        }
    }
    return maxWord;
    
}


void Longestword3(string str)
{
    string word = "";
    string maxWord = "";
    for(int i = 0; i < str.size(); i++)
    {
        if( str[i] != ' ')
        {
            word = word + str[i];
        }
        else
        {
            word = '\0';
        }
        if( word.length() > maxWord.length())
        {
            maxWord = word;
        }
    }
    cout << word;
}


    


int main() {
    cout << "HEY";
    string s;
    getline(cin, s);
    cout << LongestWord(s) << endl;
    cout << LongestWord2(s) << endl;
    Longestword3(s);
    return 0;
    
}

        


//
//#include <iostream>
//#include <vector>
//using namespace std;
//void Longestword(string str)
//{
//    string word = "";
//    string maxWord = "";
//    for(int i = 0; i < str.size(); i++)
//    {
//        if( str[i] != ' ')
//        {
//            word = word + str[i];
//        }
//        else
//        {
//            word = '\0';
//        }
//        if( word.size() > maxWord.size())
//        {
//            maxWord = word;
//        }
//    }
//    cout << word;
//}
//
//int main(int argc, const char * argv[])
//{
//    string s;
//    getline(cin,s);
//
//    Longestword(s);
//    cout << endl;
//
//
//}
//
