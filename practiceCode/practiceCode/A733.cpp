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
//	std::vector<char> input;
//	char c;
//	bool flag = true;
//	input.push_back('A');
//	while(flag)
//	{
//		c = getchar();
//		if(c!='\n')
//			input.push_back(c);
//		else
//			flag = false;
//	}
//	input.push_back('1');
//	int min(0),count(0),i(1);
//	while(i<input.size())
//	{
//		if((input[i] != 'A')&&(input[i] != 'E')&&(input[i] != 'I')&&(input[i] != 'O')&&(input[i] != 'U')&&(input[i] != 'Y')&&(input[i] != '1'))
//				count++;
//		else
//		{
//			count++;
//			if ( count > min)
//				min = count;
//			count = 0;
//		}
//		i++;
//	}
//	std::cout<<min;
//}