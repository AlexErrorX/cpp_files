#include<iostream>

using namespace std;
int a[10000];
int main()
{
    float  n;
    float ans = 0;//是和
    
    float  an_2;//平均值
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
        ans += a[i];//总数
        //ans=ans +a[i]
    }
    an_2 = ans / n;
    cout << ans << " ";
    printf("%.5f",an_2);
    return 0;
}
