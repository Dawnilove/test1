#include <stdio.h>
#include <string.h> //문자열을 다룰 수 있는 string.h 헤더파일 포함

int main(void) 
{
//1-1
    // printf("Be Happy");
    // printf("My friend\n");

    // return 0;
    
//1-2
    // printf("Be Happy\n");
    // printf("1234567890\n");
    // printf("My\tfriend\n");
    // printf("Goot\bd\tchance\n");
    // printf("Cow\rW\a\n");

    // return 0; 

//1-3
    // printf("%d\n", 10);   //%d에 10을 넣어 출력
    // printf("%lf\n", 3.4);  //%lf에 3.4를 넣어 출력 6자리까지 출력
    // printf("%.1lf\n", 3.45); //3.45를 넣어 소수점 첫째 자리까지 출력(둘째 자리 반올림    )
    // printf("%.10lf\n", 3.4); //3.4를 넣어 소수점 10자리까지 출력

    // printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
    // printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

    // return 0;
    
//1-4
    // printf("%c\n", 'AB'); //%c에 'AB'를 넣으면 B만 출력됨
    // printf("%s\n", "ABC");
    // printf("%c는 %s입니다.\n", '1', "Hello");
        
    // return 0;

//1-5
    // int a;
    // int b, c;
    // double da;
    // char ch;

    // a= 10;
    // b=a;
    // c= a+20;
    // da= 3.5;
    // ch= 'A';

    // printf("변수 a의 값은 %d입니다.\n", a);
    // printf("변수 b의 값은 %d입니다.\n", b);
    // printf("변수 c의 값은 %d입니다.\n", c);
    // // printf("변수 da의 값은 %lf입니다.\n", da);
    // printf("변수 da의 값은 %.1lf입니다.\n", da);
    // printf("변수 ch의 값은 %c입니다.\n", ch);   

    // return 0;

//1-6
    // char ch1 = 'A';
    // char ch2 = 65;

    // printf("문자 %c 의 아스키 코드 값: %d\n", ch1, ch1);
    // printf("아스키 코드 값이 %d인 문자: %c\n", ch2, ch2);

    //return 0;

//1-6
    // short sh1 = 32767;
    // int i1 = 2147483647;
    // long ln = 2147483647;
    // long long lln = 9223372036854775807;

    // printf("short형 변수 sh1 출력: %d\n", sh1);
    // printf("int형 변수 i1 출력: %d\n", i1);
    // printf("long형 변수 ln 출력: %ld\n", ln);
    // printf("long long형 lln변수 출력: %lld\n", lln);   

    // return 0;

//1-7
    // unsigned int a;

    // a= 4294967295;
    // printf("%d\n", a); //%d에 a를 넣어 출력
    // a= -1;
    // printf("%u\n", a); //%u에 a를 넣어 출력

    // return 0;

//1-8
    // float ft = 1.23456789123456789;
    // double db = 1.23456789123456789;

    // printf("float형 변수 ft 출력: %.20f\n", ft);
    // printf("double형 변수 db 출력: %.20lf\n", db);  

    // return 0;


//1-9
    // char fruit[20] = "strawberry"; // char 배열 선언과 문자열 초기화

    // printf("딸기: %s\n", fruit); // 배열명으로 저장된 문자열 출력
    // printf("딸기잼: %s %s\n", fruit, "jam"); //문자열 상수를 직점 %s에 넣어 출력

    // return 0;

//1-10
    // char fruit[20] = "strawberry"; // char 배열(strawberry) 선언과 문자열 초기화

    // printf("%s\n", fruit); // 배열명으로 저장된 문자열 출력
    // strcpy(fruit, "banana"); //strcpy()함수로 문자열 복사
    // printf("%s\n", fruit); //배열명으로 저장된 문자열 출력

    // return 0;

//1-11
    // int income = 0;  //소득액 초기화
    // double tax;  //세금
    // const double tax_rate = 0.12; //세율 상수 선언 및 초기화

    // income = 456; //소득액 저장
    // tax = income * tax_rate; //세금 계산
    // printf("세금은: %.1lf입니다.\n", tax);

    // return 0;

//1-12
    // int a;
        
    // printf("정수를 입력하세요: ");
    // scanf("%d", &a); //정수 입력
    // printf("너가 입력한 숫자는... %d야!!\n", a); //입력한 정수 출력

    // return 0;

//1-13
    // int age;  //나이는 정수형
    // double height; //키는 실수형

    // printf("나이와 키를 입력하세요: "); //입력 안내 출력
    // scanf("%d %lf", &age, &height); //나이와 키 입력
    // printf("나이는 %d살이고, 키는 %.1lfcm입니다.\n", age, height); //입력한 나이와 키 출력

    // return 0;

//1-14 (이상함)
    // char grade; //학점은 문자형
    // char name[20]; //이름은 문자열형

    // printf("학점을 입력하세요: "); //입력 안내 출력
    // scanf(" %c", &grade); //학점 입력
    // printf("이름을 입력하세요: "); //입력 안내 출력
    // scanf("%s", name); //name은 문자열이므로 &를 붙이지 않음
    // printf("학점은 %c이고, 이름은 %s입니다.\n", grade, name); //입력한 학점과 이름 출력 

    // return 0;

//1-15
    // int a, b;
    // int sum, sub, mul, inv;

    // a= 10;
    // b= 20;
    // sum= a+b;
    // sub= a-b;
    // mul= a*b;
    // inv= - a;

    // printf("a의 값: %d, b의 값: %d\n", a, b);
    // printf("합: %d, 차: %d, 곱: %d, 음수: %d\n", sum, sub, mul, inv);

    // return 0;

//1-16
    // double apple; //실수형 변수 apple 선언
    // int banana, orange; //정수형 변수 banana, orange 선언

    // apple = 5.0 / 2.0; //실수형 변수 apple에 5.0을 2.0으로 나눈 값 저장
    // banana = 5 / 2; //정수형 변수 banana에 5를 2로 나눈 값 저장
    // orange = 5 % 2; //정수형 변수 orange에 5를 2로 나눈 나머지 값 저장

    // printf("실수형 apple의 값: %.1lf\n", apple);
    // printf("정수형 banana의 값: %d\n", banana);
    // printf("정수형 orange의 값: %d\n", orange);   
    
    // return 0;

//1-17
    // int a =5;
    // int b = 5;

    // int pre, post;

    // pre = (++a) * 3;
    // post = (b++) * 3;

    // printf("초깃값 a:%d, b:%d\n", a, b);
    // printf("전위연산 결과: %d\n", pre);
    // printf("후위연산 결과: %d\n", post);

    // return 0;

//1-18
    //int a = 10, b= 20, c= 10;
    // int res; // 결과를 저장할 변수 res 선언

    // res = (a > b); // a가 b보다 크면 1, 아니면 0
    // printf(" a > b : %d\n", res);
    // res = (a >= b); // a가 b보다 크거나 같으면 1, 아니면 0
    // printf(" a >= b : %d\n", res);
    // res = (a < b); // a가 b보다 작으면 1, 아니면 0
    // printf(" a < b : %d\n", res);
    // res = (a <= b); // a가 b보다 작거나 같으면 1, 아니면 0
    // printf(" a <= b : %d\n", res);
    // res = (a <= c); // a가 c보다 작거나 같으면 1, 아니면 0
    // printf(" a <= c : %d\n", res);
    // res = (a == b); // a가 b와 같으면 1, 아니면 0
    // printf(" a == b : %d\n", res);
    // res = (a != c); // a가 c와 같지 않으면 1, 아니면 0
    // printf(" a != c : %d\n", res);

    // return 0;

//1-19
    // int a = 30;
    // int res; // 결과를 저장할 변수 res 선언

    // res = (a > 10) && (a < 20); // a가 10보다 크고 20보다 작으면 1, 아니면 0 [and]
    // printf(" a > 10 && a < 20 : %d\n", res);
    // res = (a < 10) || (a > 20); // a가 10보다 작거나 20보다 크면 1, 아니면 0 [or]
    // printf(" a < 10 || a > 20 : %d\n", res);
    // res = !(a >= 30); // a가 30보다 크거나 같지 않으면 1, 아니면 0 [not]
    // printf(" !(a >= 30) : %d\n", res);

    // return 0;

//1-20
    // int a = 10, b= 20, res;

    // a + b;
    // printf("a + b = %d\n", a, b, a + b);

    // res = a + b;
    // printf("a + b = %d\n", res);

    // return 0;

//1-21
    // int a = 20, b = 3;
    // double res;

    // res = ((double)a / (double)b); // a를 double형으로 변환 후 b로 나눔
    // printf(" a = %d, b = %d\n", a, b);
    // printf(" a / b 의 결과: %.5lf\n", res);

    // a= (int)res;
    // printf("(int) %.1lf의 결과: %d\n", res, a);

    // return 0;

//1-22
    // int a = 10, b = 20;
    // int res = 2;

    // a+= 20;
    // res *= b +10;

    // printf("a = %d, b = %d\n", a, b);
    // printf("res = %d\n", res);

    // return 0;

//1-23
    // int a= 10, b= 20, res;

    // res = (a > b) ? a : b; // a가 b보다 크면 a, 아니면 b를 res에 저장
    // printf("큰 값 : %d\n", res); 

    // return 0;

//1-24
    // int a = 10;
    // int b = 12;
    // printf("a & b : %d\n", a & b); // a와 b의 비트 AND 연산 결과 출력
    // printf("a ^ b : %d\n", a ^ b); // a와 b의 비트 XOR 연산 결과 출력
    // printf("a | b : %d\n", a | b); // a와 b의 비트 OR 연산 결과 출력
    // printf("~a : %d\n", ~a); // a의 비트 NOT 연산 결과 출력
    // printf("~b : %d\n", ~b); // b의 비트 NOT 연산 결과 출력
    // printf("a << 1: %d\n", a << 1); // a의 비트 왼쪽 시프트 연산 결과 출력
    // printf("a >> 2 : %d\n", a >> 2); // a의 비트 오른쪽 시프트 연산 결과 출력
    
    // return 0;


}