/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:13:28
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:13:28
 */
#include<stdio.h>
int f(int n){
  return n == 0 ? 1 : f(n-1)*n;
}
int main(){
  printf("%d\n", f(3));
  return 0;
}
