#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

std::vector<int> memo;
int pow3(int n)
{
	return n*n*n;
}
int cbrt(int x) {
	int y = pow(x, 1 / 3.) - 3;
	while (pow3(y + 1) <= x) ++y;
	return y;
}

int dp(int n)
{
	if (n == 0)
		return 0;
	int cuberoot = cbrt(n);
	/*int cuberoot(0);
	while (pow3(cuberoot+1)<n)
	{
		cuberoot++;
	}*/
	if (memo[n] != -1000)
		return memo[n];
	else
	{
		memo[n] = dp(n - cuberoot*cuberoot*cuberoot) + 1;
	}
	return memo[n];

}


void main()
{

	int m(0);
	int max = 0;
	int block(0);
	std::vector<int> input;
	std::cin >> m;
	bool flag = true;
	for (int i = 0; i <= m; i++)
	{
		memo.push_back(-1000);
	}
	int test = 48;
	for (int i = 0; i <= m; i++)
	{
		input.push_back(dp(i));
	}
	for (int i = 0; i <= m; i++)
	{
		if (input[i] >= max)
		{
			block = i;
			max = input[i];
		}
	}
	std::cout << max << " " << block;
}
