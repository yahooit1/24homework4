#include <stdio.h>
//구조체 student1 정의
struct student1 {
char lastName; //1바이트 문자형 변수 lastName 선언
int studentId; //4바이트 정수형 변수 studetnID 선언
char grade; //1바이트 문자형 변수 grade 선언
};
//student2 구조체 정의 (typedef를 사용해 구조체 이름 생략 가능)
typedef struct {
char lastName;//1바이트 문자형 변수 lastName 선언
int studentId; //4바이트 정수형 변수 studetnID 선언
char grade; //1바이트 문자형 변수 grade 선언
} student2;
int main() {
    printf("[----- [Gahyun KIM] [2020045070] -----]\n");
struct student1 st1 = {'A', 100, 'A'}; //stduent1 구조체 변수 st1 초기화
printf("st1.lastName = %c\n", st1.lastName); // st1의 성 'A' 출력
printf("st1.studentId = %d\n", st1.studentId); //st1의 studentID 100 출력
printf("st1.grade = %c\n", st1.grade); //st1의 grade A 출력 
student2 st2 = {'B', 200, 'B'}; //student2의 구조체 변수 st2 초기화
printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastname 'B' 출력
printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId '200' 출력
printf("st2.grade = %c\n", st2.grade); //st2의 grade B 출력
    student2 st3;
    st3 = st2; //st2를 st3에 대입
printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastname 출력 = 'B' 출력
printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력 = 200 출력
printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력 = 'B' 출력
/* equality test */
//st2와 st3의 각 멤버를 비교해서 모두 같으면 equal 출력
if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) /* not working */
printf("equal\n");
else
printf("not equal\n");
return 0;
}
