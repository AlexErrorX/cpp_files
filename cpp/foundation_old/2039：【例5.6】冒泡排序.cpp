#include<iostream>

using namespace std;
int a[20];
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n-1;i++){
        for (int j = 1; j <= n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);//交换
            }
        }
    }
    for (int i = n; i >=1;i--){
        cout << a[i] << endl;
    }

    return 0;
}