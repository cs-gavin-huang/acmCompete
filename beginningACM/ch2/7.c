/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:08:53
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:08:53
 */
#include<stdio.h>
int main(){
  int x, n = 0, min, max, s = 0;
  while(scanf("%d", &x) == 1) {
    s += x;
    if(x < min) min = x;
    if(x > max) max = x;
    n++;
  }
  printf("%d %d %.3lf\n", min, max, (double)s/n);
  return 0;
}
