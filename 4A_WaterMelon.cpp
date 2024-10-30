//4A- Watermelon
#include <iostream>

int main()
{
	int w = 0;
	//scan w
	std::cin >> w;
	//range check
	if(w <= 2 || w > 100)
	{
		std::cout << "NO";
		return 0;
	}
	//special conditions
	if(w % 2 != 0)
	{
		std::cout << "NO";
		return 0;
	}
	int remainingChunk = w - 2;
	if(remainingChunk % 2 != 0)
	{
		std::cout << "NO";
		return 0;
	}	
	std::cout << "YES";
	return 0;
}