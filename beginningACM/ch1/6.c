/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 10:49:28
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 10:49:28
 */
#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  printf("%d%d%d\n", n%10, n/10%10, n/100);
  return 0;
}
