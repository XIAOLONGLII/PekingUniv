

#include<iostream>
using namespace std;
int get(int k,int year){
    int sum=200;
    if(year == 1)
        return 200;
    for(int i = 2;i <= year; i++)
        sum = sum* ( 100 + k) * 1.0 / 100;
    return sum;
}
int main(){
    int N,K;
    int year = 1;
    while(cin >> N >> K){
        while(N * year<get(K , year))
            year++;
        if(year <= 21){
            cout<<  year <<endl;
            break;
        }
        else
        {
            cout<<"Impossible"<<endl;
            break;
        }
    }
    return 0;
}
