#define _CRT_SECURE_NO_WARNINGS 
/*
* #include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char before[81];
int main() {
	gets_s(before);
	for (int i = 0; i < strlen(before); i++) {
		if (before[i] >= 'a' && before[i] <= 'y') {
			before[i] += 1;
		}
		else if (before[i] >= 'A' && before[i] <= 'Y') {
			before[i] += 1;
		}
		else if (before[i] != 'z' || before[i] != 'Z') {
			before[i] = before[i];
		}
		else {
			if (before[i] == 'Z') {
				before[i] = 'A';
			}
			else {
				before[i] = 'a';
			}
		}
	}
	printf("%s", before);
	return 0;
}
*/
/*#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
char s1[31];
char s2[31];
char swapj[31];
int main() {
	scanf("%s %s", s1, s2);
	if (strlen(s1)<strlen(s2)) {
		swap(s1, s2);
	}
	strcpy(s1, swapj);
	strcat(s1, swapj);
	if (strstr(s1,s2)==0) {
		printf("true");
	}
	else {
		printf("false");
	}
return 0;
}

*/
/*


#include<iostream>
#include<cstdio>
//#include<cstring>
#include<string>
using namespace std;
string p1;
string p2;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n;i++) {
		cin >> p1 >> p2;//scanf("%s %s",p1,p2);
		if ((p1 == "Rock" && p2 == "Scissors") || (p1=="Scissors"&&p2=="Paper")||(p1=="Paper"&&p2=="Rock")) {
			printf("Player1\n");

		}
		else if (p1==p2) {
			printf("Tie\n");
		}
		else {
			printf("Player2\n");
		}

	}

	return 0;
}

*/
/*

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char be[256];
int main() {
	scanf("%s", be);
	for (int i = 0; i < strlen(be);i++) {
		if (be[i]=='A') {
			be[i] = 'T';
		}
		else if (be[i] == 'T') {
			be[i] = 'A';
		}
		else if (be[i] == 'G') {
			be[i] = 'C';
		}
		else {
			be[i] = 'G';
		}
	}
	printf("%s", be);
	//A总是和T配对，G总是和C配对

	return 0;
}


*//*


#include<cstdio>
#include<string.h>
using namespace std;
char a[101];
int main() {
	gets(a);
	int len = strlen(a);
	for (int i = 0; i <len ;i++) {
		if (a[i]>='a'&&a[i]<='z') {
			a[i] -= 32;
		}
	}
	printf("%s", a);
	return 0;
}*/

//#include<iostream>
//#include<string>
//using namespace std;
//string a;
//string Max_s = "", Min_s = "", temp = "";
//int main() {
//	getline(cin, a);
//	//	int len=a.size();
//	for (int i = 0; i <= a.size(); i++) {//
//		if ( a[i] != ' ' && a[i] != '\0') {
//			temp += a[i];
//		}
//		else if (temp == "") {
//
//		}
//		else if (a[i]=='.') {
//			break;
//		}
//		else {
//			if (temp.size() > Max_s.size()) {
//				Max_s = temp;
//			}if ((Min_s.size() > temp.size()) || Min_s == "") {
//				Min_s = temp;
//			}
//			temp = "";
//		}
//		//		string now;
//		//		string best;
//		//		if(a[i]!=' '&&a[i]!=','){
//		//			now+=1;
//		//		}if(now>best){
//		//			best=now;
//		//		}
//
//	}
//	//		if(temp.size()>Max_s.size()){
//	//				Max_s=temp;
//	//			}if((Min_s.size()>temp.size() )|| Min_s==""){
//	//				Min_s=temp;
//	//			}
//	//			temp="";
//
//	cout << Max_s << endl;
//	return 0;
////////}

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//struct student {
//	int grade;
//	char name[21];
//};
//int main() {
//	int n;
//	int maxgrade = 0;
//	char max_name[21]="";
//	cin >> n;
//	student sus[101];
//
//	for (int i = 0; i < n;i++) {
//		cin >> sus[i].grade >> sus[i].name;
//		if (sus[i].grade>maxgrade) {
//			maxgrade = sus[i].grade;
//			strcpy(max_name, sus[i].name);
//		}
//	}
//	cout << max_name;
//	return 0;
//}

//
//#include<iostream>
//#include<cstring>
//using namespace std;
//char a[100];
//int r, l = 0;
//int main() {
//	cin >> a;
//	int len = strlen(a) - 1;
//	r = len;
//	while (l < r) {
//		if (a[l] != a[r]) {
//			cout << "no";
//			return 0;
//		}
//		l++;
//		r--;
//
//	}
//	cout << "yes";
//	return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//string a;
//string swap_s;
//int main() {
//	getline(cin, a);
//	//for (int i = 0;i<a.size();i++) {
//	//	for (int j=a.size();j>=0;j++ ) {
//	//		if (a[i]!=a[j]) {
//	//			cout << "No";
//	//			return 0;
//	//		}
//	//	}
//	//}
//	for (int i = a.size()-1; i >= 0;i--) {
//		swap_s[i] = a[i];
//	}
//	for (int i = 0; i < a.size();i++) {
//		if (a[i]!=swap_s[i]) {
//			cout << "no";
//			return 0;
//		}
//	}
//	cout << "Yes";
//	return 0;






//
//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//string a;
//string swap_s;
//int main() {
//	getline(cin, a);
//	//for (int i = 0;i<a.size();i++) {
//	// for (int j=a.size();j>=0;j++ ) {
//	//  if (a[i]!=a[j]) {
//	//   cout << "No";
//	//   return 0;
//	//  }
//	// }
//	//}
//	int l = 0, r = a.length() - 1;
//	while (l < r) {
//		if (a[l] != a[r]) {
//			cout << "no";
//			return 0;
//		}
//		r--;
//		l++;
//	}
//	cout << "yes";
//	return 0;
//}
//





//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//char a[100], swap_s[100];
//int main() {
//	cin >> a;
//	//for (int i = 0;i<a.size();i++) {
//	// for (int j=a.size();j>=0;j++ ) {
//	//  if (a[i]!=a[j]) {
//	//   cout << "No";
//	//   return 0;
//	//  }
//	// }
//	//}
//	for (int i = strlen(a) - 1; i >= 0; i--) {
//		swap_s[strlen(a) - 1 - i] = a[i];//减1是为了从0开始
//	}
//
//	for (int i = 0; i < strlen(a); i++) {
//		if (a[i] != swap_s[i]) {
//			cout << "no";
//			return 0;
//		}
//	}
//	cout << "yes";
//	return 0;
//}

////不行
//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//string a;
//string swap_a;
//int main() {
//	cin >> a;
//	for (int i = a.size(); i >= 0;i--) {
//		swap_a[a.size() - 1 - i] = a[i];
//	}
//	for (int i = 0; i < a.size();i++) {
//		for (int j = a.size(); j >= 0;j--) {
//			if (a[i]!=swap_a[j]) {
//				cout << "No";
//				return 0;
//			}
//		}
//	}
//	cout << "Yes";
//	return 0;
//}

//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//char a[200];
//char b[200];
//int main() {
//	cin >> a >> b;
//	if (strstr(a, b)==0) {
//		printf("%s is substring of %s", a, b);
//	}
//	else if (strstr(b,a)==0) {
//		printf("%s is substring of %s", b, a);
//	}
//	else {
//		printf("No substring");
//			
//	}
//	return 0;
//}
//#include<cstdio>
//#include<iostream>
//#include<string>
//using namespace std;
//string a;
//string a1;
//int main() {
//	cin >> a1;
//	cout << a1.size();
//	while (cin >> a) {
//		cout << "," << a.size();
//
//	}
//	/*for (int i = 0; i <= a.size();i++) {
//		if (a[i]!=' '&&a[i]!='\0') {
//			sum++;
//		}
//		else if (a[i+1]==' ') {
//
//		}
//		else {
//			cout << sum<<",";
//			sum = 0;
//		}*/
//	//}
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//string a;
//int main() {
//	cin >> a;
//	int len = a.size();
//	if (a[len - 1] == 'r' && a[len-2]=='e') {
//		cout << a.substr(0, len - 2);
//	}
//	else if (a[len-1]=='y'&&a[len-2]=='l') {
//		cout << a.substr(0, len - 2);
//	}
//	else if (a[len-1]=='g'&&a[len-2]=='n'&&a[len-3]=='i') {
//		cout << a.substr(0, len - 3);
//	}
//	else {
//		cout << a;
//	}
//	return 0;
//}







/*
字符串复习
#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
//char a[1000];//c 语言数字范围
//string a;
int main() {
////scanf("%s",a);
////gets(a);//char 类型读取包含空格的字符串
//getline(cin, a);//string 类型读取包含空格的字符串
////printf("%s", a);
//cout << a;
//char 类型操作函数
//strlen(a);
//if (strcmp(a, b) == 0)//如果 a 和 b 两个字符串相等，返回值是 0,如果 a 大于 b,返回值大于 0；
如果 a 小 b,返回值小于 0
// cout << "yes";
//strcat(a, b);
//strcpy(a,b);
//strupr();
//strlwr();
//strstr();
//char a[100], b[100];
//cin >> a >> b;
//if (strstr(a, b) != NULL) {
// cout << "yes";
//}
//else {
// cout << "no";
//}
//string 类型操作函数
//s.length() s.size()
//s1 == s2;
//s1 += 'a';
//s1 += s2;
//s1 = s2;
//s.substr(1,3);//截取字符串
//string s;
//cin >> s;
//cout << s.substr(2,3);
return 0;
}
//1144：单词翻转
//单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。
#include<iostream>
#include<string>
using namespace std;
int main() {
string s;//存储整个单词
string max_s="", min_s="", temp="";
getline(cin,s);
//先找到第一个单词，把它设为最大和最小单词
for (int i = 0; i <= s.length(); i++) {
if (s[i] != ' ' && s[i] != ','&&s[i]!='\0')//如果字符不是空格或者逗号，那么加到单词
里
temp += s[i];
else if (temp=="") { //处理连续的空格或者','
}
else {
if (max_s.length() < temp.length())//max_s 记录最长长度单词
max_s = temp;
if (min_s.length() > temp.length() || min_s == "")//min_s 记录最小长度单词
min_s = temp;
temp = "";//单词重置
}
}
cout << max_s << endl << min_s;
return 0;
}
//1144：单词翻转
#include<iostream>
#include<string>
using namespace std;
int main() {
string s;//存储整个单词
string temp = "";
getline(cin, s);
//先找到第一个单词，把它设为最大和最小单词
for (int i = 0; i <= s.length(); i++) {
if (s[i] != ' '&& s[i] != '\0')//如果字符不是空格或者逗号，那么加到单词里
temp += s[i];
else if (temp == "") { //处理连续的空格或者','
cout << ' ';
}
else {
for (int j = temp.size() - 1; j >= 0;j--) {//逆序输出
cout << temp[j];
}
cout << " ";//空格
temp = "";//单词重置
}
}
return 0;
}
//简化
string s;//存储整个单词
while (cin >> s) {
for (int i = s.length() - 1; i >= 0; i--)
cout << s[i];
cout << " ";
}
//1145：字符串 p 型编码
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
char s[1000];
int sum = 1;
scanf("%s",s);
for (int i = 0; i <= strlen(s)-1; i++) {
if (s[i] == s[i + 1]) {//提前预测下一个字符是否一样
sum++;
}
else {
cout << sum << s[i];
sum =1;
}
}
return 0;
}
//1148：连续出现的字符
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main() {
int k,sum=1;
char a[2500];
cin >> k >> a;
for (int i = 0; i <= strlen(a); i++) {
if (a[i] == a[i + 1]) {
sum++;
if (sum == k) {
cout << a[i];
return 0;
}
}
else {
sum = 1;//sum 重置
}
}
cout<<"No";
return 0;
}
*/
//#include<iostream>
//#include<cstdio>
//using namespace std;
//typedef struct student { //初始化结构体
//	char id[10]; //成员变量
//	char name[20];
//	int age;
//	void print() {//成员函数
//		cout << id << " " << name << " " << age;//使用自己的成员变量
//	}
//}s;//s 相当于 student
//int main() {
//	s stu1 = { "12123123","jason",19 };//定义一个结构体对象
//	cin >> stu1.id >> stu1.name >> stu1.age;
//
//#include<iostream>
//using namespace std;
//int main() {
//	return 0;
//}