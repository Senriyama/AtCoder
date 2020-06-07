#include <stdio.h>

//voidは書いても書かなくてもいい.
int main() {
  int a, b;
  //%dでint,syort型の変換指定子
  scanf("%d%d", &a,&b);
  int c = a * b;
  printf("%d", c);
  //return 0は書いても書かなくてもいい.
  return 0;
}
