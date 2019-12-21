/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:12:48
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:12:48
 */
#include<stdio.h>
int f(int n) {
  int i, m = 1;
  for(i = 1; i <= n; i++)
    m *= i;
  return m;
}

int main() {
  int m, n;
  scanf("%d%d", &m, &n);
  printf("%d\n", f(n)/(f(m)*f(n-m)));
  return 0;
}
