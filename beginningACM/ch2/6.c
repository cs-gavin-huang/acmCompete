/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:08:42
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:08:42
 */
#include<stdio.h>
#include<time.h>
int main(){
  const int MOD = 1000000;
  int i, j, n, S = 0;
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    int factorial = 1;
    for(j = 1; j <= i; j++)
      factorial = (factorial * j % MOD);
    S = (S + factorial) % MOD;
  }
  printf("%d\n", S);
  printf("Time used = %.2lf\n", (double)clock() / CLOCKS_PER_SEC);
  return 0;
}
