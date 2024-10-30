#include<string>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	//take n
	int n = 0; string input; 
	cin >> n;
	
	while(n)
	{
		cin >> input;
		int strlength = input.length();
		if(strlength <= 10)
		{
			cout << input << endl;
		}else
		{
			stringstream ss;
			ss << input[0] << (strlength - 2) << input[strlength-1];
			cout << ss.str() << endl;
		}
		n--;
	}
}
