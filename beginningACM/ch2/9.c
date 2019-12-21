/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:09:55
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:09:55
 */
#include<stdio.h>
#define INF 1000000000
int main(){
  FILE *fin, *fout;
  fin = fopen("data.in", "rb");
  fout = fopen("data.out", "wb");
  int x, n = 0, min = INF, max = -INF, s = 0;
  while(fscanf(fin, "%d", &x) == 1) {
    s += x;
    if(x < min) min = x;
    if(x > max) max = x;
    n++;
  }
  fprintf(fout, "%d %d %.3lf\n", min, max, (double)s/n);
  fclose(fin);
  fclose(fout);
  return 0;
}
