//BaekJoon_14652
//사분면 고르기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 60.925%
*/

#include <iostream>

int main() {

	int L = 0;
	int t = 0;

	std::cin >> L;

	t += (L - 1) / 5;

	std::cout << t + 1;

	return 0;
}
