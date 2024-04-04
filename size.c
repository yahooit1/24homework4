#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [Gahyun KIM] [2020045070] -----]\n");
int **x; //정수형 이중포인터
printf("sizeof(x) = %lu\n", sizeof(x)); // x의 크기 출력 (주소값의 크기)
printf("sizeof(*x) = %lu\n", sizeof(*x)); // x가 가리키는 대상의 크기 출력 (int 포인터의 크기)
printf("sizeof(**x) = %lu\n", sizeof(**x)); // x가 가리키는 대상이 가리키는 값의 크기 출력 (int 값의 크기)
}
