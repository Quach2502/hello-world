#include <iostream>
#include <vector>
void main()
{
	int number(0);
	std::vector<int> input;
	std::cin >> number;
	int output = 1;
	for (int i = 0; i < number; i++)
	{
		int a;
		std::cin >> a;
		input.push_back(a);
	}

	std::cout << output;

}