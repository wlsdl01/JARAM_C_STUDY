/*
배열을 선언하고 배열의 순서대로 값을 출력해주는 프로그램을 만드세요
알고리즘 정의: 배열을 사용하세요
입력: 4 5 2 5 3 8 2 5 3 7
출력: 4->5->2->5->3->8->2->5->3->7
*/

#include <stdio.h>

int main() {
	int arr[10];
	int i;
	scanf("%d %d %d %d %d %d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6, arr + 7, arr + 8, arr + 9);

	for (i = 0; i < 10; i++) {
		printf("%d->", &arr[i]);
	}
}
