#include <iostream>
#include <sstream>
using namespase std;
int main()
{
	for (string;getline(cin, string); )
  { int numbers[10];
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numbers[i])) {failure = true;break;}}
		int max = numbers[0];
		for (int i = 0; i < 10; ++i) {if (numbers[i]>max) {max = numbers[i];}	}
		if (!failure) {cout << max;}
		else {cout << "An error has occured while reading numbers from line" <<endl;}
		return 0;
	}
}
