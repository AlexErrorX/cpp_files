#include<iostream>

using namespace std;
bool a[1000];
int main()
{
    int n;
    cin >> n;
    
    // 0表示关，1表示开
    for (int i = 1; i <= n; i++)
    { // i表示第几个员工
        for (int j = 1; j <= n; j++)
        { // j表示遍历所有房间
            if (j % i == 0)
            { //是
                if (a[j] == 0)
                {
                     a[j] = 1; }
                else{a[j] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= n;i++)
            {
                if(a[i]==1)
                    cout <<i<<endl;}
    /*for (int i = 1; i <= n;i++){
        if(a[i]){
            if(biaozhi){
                biaozhi = 0;
            }else{
                cout << " " << a[i];
            }
        }
    }*/
    return 0;
}