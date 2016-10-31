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
//	std::unordered_map<std::string, std::string> dict;
//	ll number(0);
//	int max = 1;
//	std::vector<int> s;
//	std::vector<int> t;
//	std::vector<int> output;
//	int c(0),d(0);
//	int count(0);
//	bool flag = true;
//	while(c != '\n')
//	{
//		c = getchar();
//		if ( c!= '\n')
//		{
//			s.push_back(c-48);
//		}
//	}
//	while(d != '\n')
//	{
//		d = getchar();
//		if ( d!= '\n')
//		{
//			t.push_back(d-48);
//		}
//	}
//	for ( int i =0 ; i < s.size();i++)
//	{
//		if(s[i]==t[i])
//			output.push_back(s[i]);
//		else
//		{
//			if(count %2 == 0 )
//				output.push_back(s[i]);
//			else
//				output.push_back(t[i]);
//			count++;
//		}
//	}
//	if(count%2 != 0)
//		std::cout<<"impossible";
//	else
//	{
//		for(int i = 0 ; i < output.size();i++)
//			std::cout<<output[i];
//	}
//}