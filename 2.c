#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a%b);
}
 
int main(void) {
  int d1, d2, m, cnt =0;
  int d[2000][2000] = {0};
  scanf("%d %d", &d1, &d2);

  for(int i=d1; i<=d2; i++){
    for(int j=1; j<= i; j++){
      m = gcd(i,j);
      if(d[j/m][i/m] == 1){
        continue;
      }else {
        d[j/m][i/m] = 1;
        cnt ++;
      }
    }
  }

  printf("%d", cnt);
  return 0;
}
