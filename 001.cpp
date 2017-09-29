#include <iostream>
#include <sstream>
using namespase std;
int main()
{
	for (string;getline(cin, string); )
  { int n[10];
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> n[i])) {failure = true;break;}}
		int max = n[0];
		for (int i = 0; i < 10; ++i) {if (nu[i]>max) {max = nub[i];}	}
		if (!failure) {cout << max;}
		else {cout << "An error has occured while reading numbers from line" <<endl;}
		return 0;
	}
}
