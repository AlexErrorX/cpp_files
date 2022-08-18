#include<iostream>

using namespace std;
int main (){
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    double z;
    z=(b*y-a*x)/(b-a);
	printf("%.2f\n",z); 

    return 0;
}