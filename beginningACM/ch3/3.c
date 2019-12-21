/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-12-21 12:10:50
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-12-21 12:10:50
 */
#include<stdio.h>
#include<string.h>
#define MAXN 10
int a[MAXN][MAXN];
int main(){
  int n, x, y, tot = 0;
  scanf("%d", &n);
  memset(a, 0, sizeof(a));
  tot = a[x=0][y=n-1] = 1;
  while(tot < n*n) {
    while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;
    while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
    while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++tot;
    while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot;
  }
  for(x = 0; x < n; x++) {
    for(y = 0; y < n; y++) printf("%3d", a[x][y]);
    printf("\n");
  }
  return 0;
}
