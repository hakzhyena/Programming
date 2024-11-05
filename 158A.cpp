#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n = 0, k = 0, t = 0;
	cin >> n >> k; 
	if (n == 1)
	{
		int temp = 0;
		cin >> temp;
		if (temp == 0) 
		{
			cout << 0;
			return 0;
		}
		else
		{
			cout << 1;
			return 0;
		}
	}
	int input = 0;
	vector<int> inputs;
	for (int i = 0; i < n; i++) 
	{
		cin >> input;
		inputs.push_back(input);
	}
	int valueAtK = inputs[k-1];
	
	if (valueAtK == 0)
	{
		for (int i = 0; i < k - 1; i++) 
		{
			if (inputs[i] > 0) 
			{
				t++;
			}
		}
		cout << t;
		return 0;
	}
	else 
	{
		t = k;
		
		for (int i = k - 1, j = k; valueAtK == inputs[j] && j < n; j++)
		{
			t++;
		}
		cout << t;
	}
	
}