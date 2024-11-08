#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int  r = 0, c = 0, idx = 0, t = -1;
	string s;
	bool found = false;
	while (r < 5) 
	{
		getline(cin, s);
		c = 0; // reset the column
		idx = 0; // reset the index
		while (c < 5) 
		{
			t = s[idx] - '0';
			if (t == 1)
			{
				found = true;
				break;
			}
			c++;
			idx += 2;
		}
		if (found == true)
			break;
		r++;
	}
	int diff = abs(2 - r);
	diff += abs(2 - c);

	cout << diff;
}
