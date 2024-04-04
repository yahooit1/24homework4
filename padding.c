#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */ 
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [Gahyun KIM] [2020045070] -----]\n");
struct student pst;  // struct student 타입의 변수 pst 선언
printf("size of student = %ld\n", sizeof(struct student));  // struct student의 크기 출력
printf("size of int = %ld\n", sizeof(int)); // int 타입의 크기 출력
printf("size of short = %ld\n", sizeof(short)); // short 타입의 크기 출력
return 0;
}