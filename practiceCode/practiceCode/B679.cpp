//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cmath>
//
//std::vector<int> memo;
//long long pow3(long long n)
//{
//	return n*n*n;
//}
//long long steps(long long m) 
//{ 
//	if(m <= 7)
//		return m;
//	long long x = 1;
//	while(pow3(x+1) <= m) ++x;
//	return 1 + steps(std::max(m - pow3(x), pow3(x)-1-pow3(x-1)));
//}
//
//
//
//void main()
//{
//
//	long long m(0);
//	long long subtracted = 0, steps_so_far = 0;
//	std::cin >> m;
//	while(m) {
//		++steps_so_far;
//		long long x = 1;
//		while(pow3(x+1) <= m) ++x;
//		if(steps(m) == 1 + steps(m - pow3(x))) {
//			m -= pow3(x);
//			subtracted += pow3(x);
//		}
//		else {
//			m = pow3(x) - 1 - pow3(x-1);
//			subtracted += pow3(x-1);
//		}
//	}
//	std::cout<<steps_so_far<<" "<<subtracted;
//}
