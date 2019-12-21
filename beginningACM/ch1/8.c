/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 10:52:50
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 10:52:50
 */
#include<stdio.h>
int main(){
  int a, b, t;
  scanf("%d%d", &a, &b);
  t = a;
  a = b;
  b = t;
  printf("%d %d\n", a, b);
  return 0;
}
