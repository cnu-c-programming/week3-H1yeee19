#include <stdio.h>
#include <stdarg.h>

int average(int count, ...) {
  va_list ap;    //파라미터 주소?
  va_start(ap, count);    //마지막 입력값 뒤 주소를 초기화
  int total = 0;
  for (int i=0; i<count; i++)
    total += va_arg(ap,int);    //입력값의 주소와 입력값 타입을 받음
  int av = 0;
  av = total/ count;
  va_end(ap);
  
  return av;
}

int main() {
  printf("%d\n", average(3, 10, 20, 30));
  printf("%d\n", average(5, 10, 20, 30, 40, 50));
  return 0;
}
