/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:07:35
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:07:35
 */
#include<stdio.h>
int main(){
  int n, count = 0;
  scanf("%d", &n);
  while(n > 1) {
    if(n % 2 == 1) n = n*3+1;
    else n /= 2;
    count++;
  }
  printf("%d\n", count);
  return 0;
}
