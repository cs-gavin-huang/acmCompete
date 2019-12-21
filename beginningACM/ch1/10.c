/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 10:53:27
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 10:53:27
 */
#include<stdio.h>
int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("%d %d\n", a, b);
  return 0;
}
