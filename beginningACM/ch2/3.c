/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:07:20
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:07:20
 */
#include<stdio.h>
int main(){
  int x, n, hi, lo;
  for(x = 1; ; x++) {
    n = x * x;
    if(n < 1000) continue;
    if(n > 9999) break;
    hi = n / 100;
    lo = n % 100;
    if(hi/10 == hi%10 && lo/10 == lo%10) printf("%d\n", n);
  }
  return 0;
}
