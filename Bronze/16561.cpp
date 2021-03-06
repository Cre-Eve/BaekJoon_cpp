//BaekJoon_16561
//3의 배수

/*
* 제한 시간 : 0ms / 0.1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 65.393%
*/

#include <iostream>

int main() {


	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0, answer = 0;

	std::cin >> n;

	for (int i = 0; i <= n / 3 - 2; i++)
	{
		answer += i;
	}

	std::cout << answer;

	return 0;
}


// 다른 방법

/*

n-1 C n-3 공식 사용

if (n < 9)
	std::cout << 0;
else
	{
	n = (n - 9) / 3 + 3 - 1;
	std::cout << n * (n - 1) / 2;
	}

*/
