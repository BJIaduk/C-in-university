#include <iostream>
#include <string>
using namespace std;
void pr(string& str1, string str_old1, string str_new1);
int main()
{
	string str, str_m;
	int n = 0;
	getline(cin, str);
	getline(cin, str_m);
	while (str.size() > 0) {
		int l;
		l = str.find(str_m);
		if (l < 0) break;
		n++;
		str.erase(0, str.find(str_m) + str_m.size());
	}
	cout << n;
}