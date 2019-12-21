/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:07:44
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:07:44
 */
#include<stdio.h>
int main(){
  int i, j, n, S = 0;
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    int factorial = 1;
    for(j = 1; j <= i; j++)
      factorial *= j;
    S += factorial;
  }
  printf("%d\n", S % 1000000);
  return 0;
}
