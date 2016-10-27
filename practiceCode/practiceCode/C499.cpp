//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <tuple>
//#define limit 1e-7
//typedef long long ll;
//bool check(double a, double b, double c, ll x1, ll y1, ll x2, ll y2)
//{
//	double result = (a*x1 + b*y1 +c)*(a*x2 + b*y2 +c);
//	if (result < limit)
//		return true;
//	else
//		return false;
//}
//void main()
//{
//	ll x1(0),y1,x2,y2,number;
//	int max = 1;
//	std::vector<std::tuple<ll,ll,ll>> input;
//	int output(0);
//	std::cin >> x1>>y1;
//	std::cin >> x2 >> y2;
//	std::cin >> number;
//	bool flag = true;
//	for (int i = 0; i < number; i++)
//	{
//		double a,b,c;
//		std::cin >> a>>b>>c;
//		if (check(a, b, c, x1, y1, x2, y2))
//			output++;
//	}
//	std::cout << output;
//}