//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//typedef long long ll;
//void main()
//{
//	int number(0),x(0);
//	int current(1);
//	int output(0);
//	int max = 1;
//	std::vector<std::pair<int,int>> input;
//	std::cin >> number>>x;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		int a,b;
//		std::cin >> a>>b;
//		input.push_back(std::make_pair(a,b));
//	}
//	for (int i = 0; i < number; i++)
//	{
//		while(current+x <= input[i].first)
//			current += x;
//		output += input[i].second - current + 1;
//		current = input[i].second + 1;
//	}
//	std::cout<<output;
//}
