#include <iostream>
#include <cstring>

using namespace std;

int main() {

const int DAYS = 7;
const int MAX = 10;

char star[DAYS][MAX] = { 
	"Sunday", "Monday", "Tuesday","Thursday","Friday","Saturday"

};

for (int i = 0; i < DAYS; i++)
{
	cout << star[i] << endl;
}

	system("pause");
	return 0;
}
