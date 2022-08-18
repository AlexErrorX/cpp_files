#include<iostream>

using namespace std;
int main (){
    int a, b;
    cin >> a >> b;
    double c = a / b;
    printf("%.0lf",c);
    cout << " " << a % b;
    return 0;
}