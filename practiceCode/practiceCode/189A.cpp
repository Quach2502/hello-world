//#include <iostream>
//#include <vector>
//#include<algorithm>
//int memo[4001] = {};
//int dp(int n,int a,int b,int c)
//{
//	if (n == 0)
//		return 0;
//	if (n < (std::min(a, std::min(b, c))))
//		return -4000;
//	if (memo[n] != -1)
//		return memo[n];
//	else
//		memo[n] = std::max(dp(n - a,a,b,c) + 1, std::max((dp(n - b,a,b,c) + 1), (dp(n - c,a,b,c) + 1)));
//	return memo[n];
//}
//void main()
//{
//	memo[0] = 0;
//	for (int i = 1; i < 4001; i++)
//	{
//		memo[i] = -1;
//	}
//	int number(0),a,b,c;
//	int max = 1;
//	std::vector<int> input;
//	std::cin >> number>>a>>b>>c;
//	std::cout << dp(number, a, b, c);
//}