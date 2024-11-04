//231A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 0, total = 0; string line;
	cin >> n;
	cin.ignore();

	while(n)
	{
		getline(cin, line);
		int p = line[0] - '0';
		int v = line[2] - '0';
		int t = line[4] - '0';
		
		if( (p + v + t) >= 2)
			total++;
		n--;
	}
	cout << total;
}