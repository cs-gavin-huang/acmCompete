/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 10:49:19
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 10:49:19
 */
#include<stdio.h>
#include<math.h>
int main(){
  const double pi = 4.0 * atan(1.0);
  double r, h, s1, s2, s;
  scanf("%lf%lf", &r, &h);
  s1 = pi * r * r;
  s2 = 2 * pi * r * h;
  s = s1 * 2.0 + s2;
  printf("Area = %.3lf\n", s);
  return 0;
}
