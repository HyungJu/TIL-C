// https://codeup.kr/problem.php?id=4818
// k!=0 일때는 고려안함

#include <stdio.h>

int main(void) {
  int w,h,k,i,j,a;
  int d[16][16] = {0};

  scanf("%d %d %d", &w, &h, &k);

  d[1][0] = 1;

  for(i=1; i<=w; i++){
    for(j=1; j<=h; j++){
      d[i][j] = d[i-1][j] + d[i][j-1];
    }
  }

  for(i=0; i<=w; i++){
    for(j=0; j<=h; j++){
      printf("d[%d][%d]: %d ", i,j,d[i][j]);
    }
    printf("\n");
  }

  printf("result : %d", d[w][h]);


  return 0;
}
