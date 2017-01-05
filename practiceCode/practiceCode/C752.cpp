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
//	std::unordered_map<char, bool> dict;
//	int n(0);std::cin>>n;
//	std::string input;std::cin>>input;
//	int output(0);
//	dict['L'] = false;dict['D'] = false;dict['R'] = false;dict['U'] = false;
//	int state(0);
//	int i(0);
//	while(i<n)
//	{
//		if(state ==0)
//		{
//			dict['L'] = false;dict['D'] = false;dict['R'] = false;dict['U'] = false;
//			output++;
//			state = 1;
//			dict[input[i]] = true;i++;
//		}
//		else
//		{
//			if(input[i] == 'L')
//			{
//				if(dict['R'])
//					state = 0;
//				else
//				{
//					dict['L'] = true;
//					i++;
//				}
//			}
//			else if(input[i] == 'R')
//			{
//				if(dict['L'])
//					state = 0;
//				else
//				{
//					dict['R'] = true;
//					i++;
//				}
//			}
//			else if(input[i] == 'U')
//			{
//				if(dict['D'])
//					state = 0;
//				else
//				{
//					dict['U'] = true;
//					i++;
//				}
//			}
//			else if(input[i] == 'D')
//			{
//				if(dict['U'])
//					state = 0;
//				else
//				{
//					dict['D'] = true;
//					i++;
//				}
//			}
//		}
//	}
//	std::cout<<output;
//	
//}