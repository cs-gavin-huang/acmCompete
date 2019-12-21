/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 10:52:35
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 10:52:35
 */
#include<stdio.h>
int main(){
  int n, m;
  scanf("%d", &n);
  m = (n%10)*100 + (n/10%10)*10 + (n/100);
  printf("%03d\n", m);
  return 0;
}
