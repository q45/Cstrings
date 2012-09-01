#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char str1[] = "Nebraska is beating Mississippi State right now";
	const int MAX = 80;
	char str2[MAX];

	strcpy(str2 , str1);
	cout << str2 << endl;

	cout << str2[4] << endl;

	system("pause");
	return 0;
}
