/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:05:08
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:05:08
 */
#include<stdio.h>
int main(){
  int a, b, c, x, y, z;
  scanf("%d%d%d", &a, &b, &c);
  x = a; if(b < x) x = b; if(c < x) x = c;
  z = a; if(b > z) z = b; if(c > z) z = c;
  y = a + b + c - x - z;
  printf("%d %d %d\n", x, y, z);
  return 0;
}
