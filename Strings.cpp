#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str1[] = "Oh, captain my Captain, our fearful trip is done";
	const int MAX = 80;
	char str2[MAX];

	
	for(int i=0; i < strlen(str1); i++) {
		str2[i] = str1[i];
		cout << str2[i];
		str2[i]  = '\0';
	}//end of for loop
	cout << endl;

	system("pause");
	return 0;
	

}