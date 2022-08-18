/*总成绩 = 作业成绩 20% +小测成绩 30% + 期末考试成绩 50%
*/
#include<iostream>


using namespace std;
int main (){
    float a,b,c;

    cin >> a >> b >> c;
    if (a>100||b>100||c>100){
        return 0;
    }else{
        float ans;
        ans = a * 0.2 + b * 0.3 + c * 0.5;
        printf("%d",ans);
    }
    return 0;
}