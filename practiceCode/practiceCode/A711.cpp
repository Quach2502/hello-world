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
//	ll number(0);
//	int max = 1;
//	std::vector<std::vector<char>> input;
//	int output;
//	std::cin >> number;
//	std::cin.clear();
//	std::cin.ignore(10000, '\n');
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		std::vector<char> a;
//		char c = 'a';
//		while(c!= '\n')
//		{
//			c = getchar();
//			if (c != '\n')
//				a.push_back(c);
//		}
//		input.push_back(a);
//	}
//	for (int i = 0; i < number && flag; i++)
//	{
//		if (input[i][0] == input[i][1] && input[i][0] == 'O')
//		{
//			flag = false;
//			input[i][0] = '+';
//			input[i][1] = '+';
//		}
//		else
//		{
//			if (input[i][3] == input[i][4] && input[i][3] == 'O')
//			{
//				flag = false;
//				input[i][3] = '+';
//				input[i][4] = '+';
//			}
//		}
//	}
//	if (flag)
//		std::cout << "NO\n";
//	else
//	{
//		std::cout << "YES\n";
//		for (int i = 0; i < number; i++)
//		{
//			for (int j = 0; j < 5; j++)
//				std::cout << input[i][j];
//			std::cout << '\n';
//		}
//	}
//}