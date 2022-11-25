// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ... 
// 
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.
// 
// 2.   Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”.

#include <iostream>
#include<string>
using namespace std;

bool findOut(const string str) {
	bool t = false;
	size_t pos = 0;
	while (((pos = str.find('n', pos)) != -1) || ((pos = str.find('o', pos)) != -1)) {
		if ((str[pos] == 'n' && str[pos + 1] == 'o') || (str[pos] == 'n' && str[pos -1] == 'o')){
			t = true;
		}
		pos++;
	}
	return t;
}
string Change(string& str) {
	size_t pos = 0;
	while ((pos = str.find('n', pos)) != -1) {
		if (str[pos + 1] == 'o') {
			str.replace(pos, 2, "***");
		}
		pos++;
	}
	return str;
}

int main()
{
	string str;
	cout << "input ";
	getline(cin, str, '\n');
	if (findOut(str) == true) {
		cout << " IS a pair of adjacent letters 'no' or 'on'" << endl;
	}
	else {
		cout << " NO a pair of adjacent letters 'no' or 'on'" << endl;
	}
	string dest = Change(str);
	cout << dest << endl;

	return 0;
}