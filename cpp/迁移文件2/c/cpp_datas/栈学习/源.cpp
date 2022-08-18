#include<iostream>
using namespace std;
int stack[1000];
int top = 0;
int n;
void push()
{
	if (top == n) {
		return;
	}
	else {
		int xd;
		cin >> xd;
		stack[top] = xd;
		(top)++;
		push();
	}
}
void pop()
{
	if (top == 0)
	{
		cout << "under flow" << endl;
	}
	else {
		int t;
		t = stack[top - 1];
		cout << t;
		(top)--;
		pop();
	}
}
int main() {
	cin >> n;
	push();
	pop();
	return 0;
}