#include "iostream"
#include "sstream"

using namespace std;

int main() { int max1, max2, i,j, s[10], x[10], maxI, maxJ;

for (string string; getline(cin, string); ) {
	istringstream stream(string);
	bool failure = false;
	for (int j = 0; j < 10; ++j) {
		if (!(stream >> s[j])) {
			failure = true;
			break;}	}
	max1 = s[1];

	if (!failure) {
		for (int j = 0; j < 10; ++j) {
			if (s[j] > max1) {
				max1 = s[j]; maxJ=j;
			}
		}

		break;
	}
	else {
		cout << "smb will be sleep" << endl;
	}
}

for (string string; getline(cin, string); ) {
	istringstream stream(string);
	bool failure = false;
	for (int i = 0; i < 10; ++i) {
		if (!(stream >> x[i])) {
			failure = true;
			break;
		}
	}

	max2 = x[1];

	if (!failure) {
		for (int i = 0; i < 10; ++i) {
			if (x[i] > max2) {
				max2 = x[i];maxI=i;
			}
		}

		break;
	}
	else {
		cout << "smb don't let to be glad" << endl;
	}
} if (maxI>=maxJ){

cout << max1 + max2 << endl;}
            else {
		cout << max2 << endl;
	}
return 0;
}
