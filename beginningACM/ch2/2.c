/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:07:02
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:07:02
 */
#include<stdio.h>
#include<math.h>
int main(){
  int a, b, n;
  double m;
  for(a = 1; a <= 9; a++)
    for(b = 0; b <= 9; b++) {
      n = a*1100 + b*11;
      m = sqrt(n);
      if(floor(m+0.5) == m) printf("%d\n", n);
    }
  return 0;
}
