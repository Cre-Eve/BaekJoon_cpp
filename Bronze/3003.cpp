//BaekJoon_3003
//킹, 퀸, 룩, 비숍, 나이트, 폰

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 71.274%
*/

#include <iostream>

int main() {

	int R[6]{0}, C[6]{1, 1, 2, 2, 2, 8};

	scanf_s("%d %d %d %d %d %d", &R[0], &R[1], &R[2], &R[3], &R[4], &R[5]);
	printf_s("%d %d %d %d %d %d", C[0] - R[0], C[1] - R[1], C[2] - R[2],
							   C[3] - R[3], C[4] - R[4], C[5] - R[5]);
}