#include <stdio.h>

int main(void) {
  int a = 10, b =5;

  int add(int a, int b) {
    printf("%d + %d = %d\n",a, b, a+b);
  }
  int subtract(int a, int b) {
    printf("%d - %d = %d\n",a, b, a-b);
  }
  int multiply(int a, int b) {
    printf("%d * %d = %d\n",a, b, a*b);
  }
  int divide(int a, int b) {
    printf("%d / %d = %d\n",a, b, a/b);
  }

  add(a,b);
  subtract(a,b);
  multiply(a,b);
  divide(a,b);

return 0;
}
