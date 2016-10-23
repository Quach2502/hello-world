//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//typedef long long ll;
//
//int pow2(int n)
//{
//	return n*n;
//}
//
//int sqrt(int n)
//{
//	int x(1);
//	while(pow2(x+1)<=n) x++;
//	return x;
//}
//void main()
//{
//	std::vector<std::pair<int,int>> result;
//	int n(0),m(0);
//	int max = 1;
//	int count(0);
//	int a(0),b(0);
//	std::cin >> n>>m;
//	int nsqrt = sqrt(n);
//	int msqrt = sqrt(m);
//	while (a <= nsqrt)
//	{
//		b = n - pow2(a);
//		if (b > msqrt)
//		{
//			a++;
//		}
//		else
//		{
//		if (pow2(b) + a == m)
//		{
//			result.push_back(std::make_pair(a,b));
//			count++;
//			a++;
//		}
//		else
//			a++;
//		}
//	}
//	std::cout<<count;
//
//}
