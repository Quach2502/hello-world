//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//typedef long long ll;
//void main()
//{
//	std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	int max = 1;
//	std::vector<int> input;
//	std::vector<std::pair<int,int>> evenL;
//	std::vector<std::pair<int,int>> evenS;
//	int output;
//	int c(0);
//	bool flag = true;
//	while ( c != '\n')
//	{
//		c = getchar();
//		if( c != '\n')
//			input.push_back(c-48);
//	}
//	int anchor = input[input.size()-1];
//	for (int i = 0; i < input.size(); i++)
//	{
//		if(input[i]%2==0)
//			{
//				if(input[i]>anchor)
//					evenL.push_back(std::make_pair(input[i],i));
//				else
//					evenS.push_back(std::make_pair(input[i],i));
//			}	
//	}
//	if(evenS.size() != 0)
//	{
//		input[evenS[0].second] = anchor;
//		input[input.size()-1] = evenS[0].first;
//		for (int i = 0; i < input.size(); i++)
//	{
//		std::cout<<input[i];
//	}
//	}
//	else
//	{
//		if(evenL.size() != 0)
//		{
//			input[evenL[evenL.size()-1].second] = anchor;
//			input[input.size()-1] = evenL[evenL.size()-1].first;
//			for (int i = 0; i < input.size(); i++)
//	{
//		std::cout<<input[i];
//	}
//		}
//		else
//		{
//			std::cout<<-1;
//		}
//	}
//}