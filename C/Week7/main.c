#include <stdio.h>

int main() {
    printf("함수의 입력값/변수/수식 = 인수, 파라미터(parameter), 아규먼트(arguement), 매개변수\n");
    printf("함수의 출력 = 리턴값(반환값)\n");
    printf("함수란?\n인수를 입력받아 주어진 작업을 수행하는 프로그램의 단위. 모듈. 서브 프로그램\n");
    printf("사용=>반복되는 구문 작업단위 구분.\n");
    printf("입력: 갯수제한 없음\n");
    printf("출력: 1개\n");
    printf("함수(function) vs 프로시저(procedure)");
    printf("함수는 리턴값이 있고, 프로시저는 리턴값이 없다.\n");
    printf("식별자(id:identifier):변수명, 상수명, 함수명, 배열명, 구조체명, 포인터명,...\n");
    printf("함수 3요소: 선언,정의,호출 (선언+정의)\n");
    printf("선언: 함수의 존재와 형식을 프로그램에게 알리는 역할\n");
    printf("정의: 함수의 실제 프로그램 코드\n");
    printf("호출: 만들어 놓은 함수를 사용,사용 전 반드시 정의 또는 선언 되어야 한다.\n");
    printf("선언의 형식\n");
    printf("returnType functionName(parameterType, ...);\n");
    printf("반환형식 변수명(매개변수타입..)\n");
    printf("정의의 형식\n");
    printf("returnType functionName(parameterType varName, ...){\n  함수 내용:\n    ...\n return returnValue;\n}\n");
    printf("호출의 형식\n");
    printf("returnTypeVar = functionName({varName|value|expr},...)\n");
    return 0;
}