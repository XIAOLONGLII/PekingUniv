//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
     //1 cin >> c
    char c;
    cout << "Enter a sentence";
    while (cin >> c)
    {
        cout << c;
    }

    //2 cin.get()
    char c1;
    cout << "Enter a sentence "<<endl;
    while ((c1 = cin.get()) != EOF)
    {
        cout << c1;
    }
    
    // 3 cin.get(c)
    char c2;
    cout << "Enter a sentence: "<<endl;
    while (cin.get(c2))
    {
        cout << c2;
    }
    return 0;
    
    // 4 getchar()

    char c4;
    cout << "Enter a sentence:"<<endl;
    while (c4= getchar())
    {
        cout << c4;
    }
    
    
    //5
    char a[10] = "Computer";
    cout << a << endl;


    // 6
    char a3[4] = {'c','o','m','\0'};
    cout << a3 << endl;

    // 7 array's address, not the array value
    int arr[8] = { 1, 2, 3, 4, 5, 6};
    cout << arr << endl;

    // 8 get
    char ch[20];
    cout << "Enter a sentence"<<endl;
    cin.get(ch, 10,'o');
    cout << ch << endl;

    // 9 getline

    char ch2[20];
    cin.getline(ch2 ,10, 'o');
    cout << ch2 << endl;
    
    // 10 cin.get() <- read Enter
    char char10[10][10];
    int n = 0;
    cin >> n;
    cin.get();
    for(int i = 0; i < n; i++)
    {
        cin.getline(char10[i],10);
    }
    for(int i = 0; i < n; i++)
    {
        cout << char10[i] << endl;
    }
    
    
    //
    char weekday[7][11] =
    { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i = 0; i< 7; i++)
    {
        cout << weekday[i] << endl;
    }
    
}
