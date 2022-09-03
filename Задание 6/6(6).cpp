#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str, word_max;
	int n_max = 0, l;
	getline(cin, str);
	l = str.size() - str.rfind(' ') - 1;
	while (str.size() > l) {
		if (n_max <= str.find(' ')) {
			word_max = str.substr(0, str.find(' '));
			n_max = (str.find(' '));
		}
		str.erase(0, str.find(' ') + 1);
	}
	cout << word_max << endl << n_max << endl << word_max.size();
	return 0;
}