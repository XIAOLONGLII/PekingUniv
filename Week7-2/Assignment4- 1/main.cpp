//编程题＃1：年龄与疾病

/*
 思考：
 1。 输入
 2. 4个 array
 3.查处个数 然后除以总个数
 */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[])
{
    //cout << "Enter n numbers "<< endl;
    int n = 0;
    cin >> n;
    vector<int> my_vetor;
    int m;
    int v1 = 0,v2 = 0,v3 = 0,v4 = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        my_vetor.push_back(m);
       
    }
    
    for (int i = 0; i < my_vetor.size(); i++)
    {
        if(my_vetor[i] <= 18)
        {
            v1++;
        }
        else if(my_vetor[i] > 18 && my_vetor[i] <= 35)
        {
            v2++;
        }
        else if (my_vetor[i] > 35 && my_vetor[i] <= 60)
        {
            v3++;
        }
        else if (my_vetor[i] > 60)
        {
            v4++;
        }
        else
        {
            cout << "0 < n <= 100 "<<endl;
        }
    }
   
    cout << fixed;
    cout << "1-18: "<< setprecision(2)<< ((double)(v1) / (double)(n)) * 100 << "%"<<endl;
    cout << "19-35: "<< setprecision(2) << ((double)(v2) / (double)(n)) * 100 << "%"<<endl;
    cout << "36-60: "<< setprecision(2) << ((double)(v3) / (double)(n)) * 100<< "%"<<endl;
    cout << "60-: "<< setprecision(2) << ((double)(v4) / (double)(n)) * 100 << "%"<<endl;
    
    
}
