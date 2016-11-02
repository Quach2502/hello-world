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
//	int block(0);
//	std::vector<char> input;
//	std::vector<int> output;
//	std::cin >> number;
//	std::cin.clear();
//	std::cin.ignore(10000, '\n');
//	char c = 'a';
//	while(c!='\n')
//	{
//		c = getchar();
//		if(c != '\n')
//			input.push_back(c);
//	}
//	int keep(0);
//	for (int i = 0; i < input.size(); i++)
//	{
//		if (i == input.size() - 1)
//		{
//			if (input[i] == 'B')
//			{
//				if (keep == 0)
//				{
//					block++;
//					output.push_back(1);
//				}
//				else
//				{
//					keep++;
//					output.push_back(keep);
//				}
//			}
//			else
//			{
//				if (keep == 0)
//					continue;
//				else
//				{
//					output.push_back(keep);
//				}
//			}
//		}
//		else
//		{
//			if (input[i] == 'B')
//			{
//				if (keep == 0)
//				{
//					keep++;
//					block++;
//				}
//				else
//					keep++;
//			}
//			else
//			{
//				if (keep == 0)
//					continue;
//				else
//				{
//					output.push_back(keep);
//					keep = 0;
//				}
//			}
//		}
//	}
//	std::cout << block << '\n';
//	for(int i = 0 ;i<output.size();i++)
//		std::cout << output[i] <<" ";
//}