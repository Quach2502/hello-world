//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//typedef long long ll;
//void main()
//{
//	std::ios::sync_with_stdio(false);
//	std::unordered_map<std::string, std::string> dict;
//	int current(97);
//	int max = 1;
//	std::vector<int> input;
//	int output(0);
//	bool flag = true;
//	char c = 'a';
//	while (c!='\n')
//	{
//		c = getchar();
//		if( c!='\n')
//		input.push_back(c);
//	}
//	for (int i = 0; i < input.size(); i++)
//	{
//		int dif = abs(input[i] - current);
//		int dif2 = 26 - dif;
//		output += std::min(dif, dif2);
//		current = input[i];
//	}
//	std::cout << output;
//}