#include<stdio.h>

int main(){

int i, n, result=1;

  scanf("%d",&n);

  for( i=n; i>0; i-- ){
    result = result*i;
  }  

  printf("%d",result);
	return 0;
}
/*
팩토리얼(!)은 다음과 같이 정의된다.
n! = n * (n-1) * (n-2) * ... * 2 * 1
즉, 5! = 5 * 4 * 3 * 2 * 1 = 120 이다.
n이 입력되면 n!의 값을 출력하시오.

* 재귀 함수를 사용하지 않고 풀기

입력 예시 1
5
출력 예시 1
120
입력 예시 2
3
출력 예시 2
6
*/