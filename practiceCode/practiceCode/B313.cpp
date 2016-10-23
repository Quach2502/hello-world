#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
typedef long long ll;
void main()
{
	int number(0);
	std::string sen;
	int max = 1;
	std::vector<std::pair<int,int>> input;
	std::vector<int> check;
	std::getline (std::cin, sen);
	std::cin >> number;
	bool flag = true;
	for (int i = 0; i < number; i++)
	{
		int a,b;
		std::cin >> a>>b;
		input.push_back(std::make_pair(a,b));
	}
	for (int i = 0; i <sen.length()-1; i++)
	{
		if (sen[i] == sen[i+1])
			check.push_back(1);
		else
			check.push_back(0);
	}
	check.push_back(0);
	for ( int i =0;i < number;i++)
	{
		int result(0);
		for(int j = input[i].first-1;j<input[i].second-1;j++)
			result += check[j];
		std::cout<<result<<std::endl;
	}
}
