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
//	std::vector<char> input;
//	int output;
//	bool flag = true;
//	bool flag1= true;
//	char a = ' ';
//	while(a!='e')
//	{
//		a = getchar();
//		if(a!='e')
//			input.push_back(a);
//	}
//	int b;
//	std::cin>>b;
//	if(b==0)
//	{
//		for (int i = 0; i < input.size(); i++)
//		{
//			if(flag)
//			{
//				if(input[i] == '.')
//					flag = false;
//			}
//			else
//			{
//				if( i==input.size()-1 && input[i] == '0')
//					flag1 = false;
//			}
//		}
//		if(flag1)
//		{
//			for (int i = 0; i < input.size(); i++)
//				std::cout << input[i];
//		}
//		else
//		{
//			std::cout<<input[0];
//		}
//	}
//	else
//	{
//	for (int i = 0; i < input.size(); i++)
//	{
//		if(flag)
//		{
//		if(input[i] != '.')
//			std::cout << input[i];
//		else
//			flag = false;
//		}
//		else
//		{
//			std::cout<<input[i];
//			b--;
//			if(b==0 && i != (input.size()-1))
//				std::cout<<'.';
//		}
//	}
//	while (b>0)
//	{
//		std::cout<<"0";
//		b--;
//	}
//	}
//}