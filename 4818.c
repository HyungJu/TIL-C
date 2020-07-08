#include <stdio.h>

int d[16][16] = {0};

void init(int w1, int h1, int w2, int h2){
  int i,j;

  for(i=0; i<16; i++){
    for(j=0; j<16; j++){
      d[i][j] = 0;
    }
  }

  d[w1][h1-1] = 1;
  for(i=w1; i<=w2; i++){
    for(j=h1; j<=h2; j++){
      d[i][j] = d[i-1][j] + d[i][j-1];
    }
  }
}

int main(void) {
  int w,h,k,i,j,a;


  scanf("%d %d %d", &w, &h, &k);


  init(1, 1, w, h);
  if(k!=0){
    a = d[k/h][k/w];
    init(k%w, k/w+1, w, h);
    printf("result : %d", d[w][h] * a);
  }else
    printf("result : %d", d[w][h]);
  
  return 0;
}

