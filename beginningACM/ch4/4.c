/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:13:12
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:13:12
 */
#include<stdio.h>
void swap(int a, int b){
  int t = a; a = b; b = t;
}

int main(){
  int a = 3, b = 4;
  swap(3, 4);
  printf("%d %d\n", a, b);
  return 0;
}
