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
//	// a is green, b is black, 1 is green, 2 is black
//	std::unordered_map<std::string, std::string> dict;
//	int n(0),k,a,b;std::cin>>n>>k>>a>>b;
//	std::vector<char> s;
//	int temp(0);
//	int last =3 ;
//	bool flag = true;
//	if(a>=b)
//	{
//		s.push_back('G');
//		temp =1;
//		a--;
//		last =1;
//	}
//	else
//	{
//		s.push_back('B');
//		temp =1;
//		b--;
//		last = 2;
//	}
//	while(flag && (a+b))
//	{
//		if(a>=b)
//		{
//			if(last == 1)
//			{
//				if(temp == k)
//				{
//					if(b==0) flag = false;
//					else
//					{
//						s.push_back('B');
//						temp = 1;
//						b--;
//						last = 2;
//					}
//				}
//				else
//				{
//					temp++;
//					a--;
//					s.push_back('G');
//				}
//			}
//			else
//			{
//				s.push_back('G');
//				temp = 1;
//				a--;
//				last = 1;
//			}
//		}
//		else
//		{
//			if(last == 2)
//			{
//				if(temp == k)
//				{
//					if(a==0) flag = false;
//					else
//					{
//						s.push_back('G');
//						temp = 1;
//						a--;
//						last = 1;
//					}
//				}
//				else
//				{
//					temp++;
//					b--;
//					s.push_back('B');
//				}
//			}
//			else
//			{
//				s.push_back('B');
//				temp = 1;
//				b--;
//				last = 2;
//			}
//		}
//	}
//	if(!flag) std::cout<<"NO";
//	else
//	{
//		for(int i=0;i<n;i++)
//			std::cout<<s[i];
//	}
//}