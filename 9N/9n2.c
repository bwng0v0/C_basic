#include<stdio.h>

int main(){

int n=5;

int i,list[n],sum=0;
int* pt;

for(i=0; i<n; i++) //정수 받기
scanf("%d",&list[i]);

pt=&list; //포인터 변수에 배열이름(가장 앞자리)저장

for(i=0; i<n; i++){ //합계 구해서
	sum+=pt[i]; //배열은 포인터라서 *를 안붙히는건가
}
printf("%d",sum); //결과 프린트
	return 0;
}

/*
## 문제 설명
사용자로부터 5개의 정수를 입력받아 배열에 저장한다. 포인터 변수 pt를 선언하고 pt에 배열의 주소값을 입력한다.
이후 포인터를 이용하여 배열 각 원소의 값을 모두 더하여 출력하는 프로그램을 작성하라. 
(반드시 포인터를 이용하여 배열의 값을 더하는 프로그램이 작성되어야 한다.) 

## 입력 예시
5 10 20 30 60

## 출력 예시
125

## 입력 예시
6 3 5 8 1

## 출력 예시
23
*/