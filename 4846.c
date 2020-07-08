#include <stdio.h>

int main(void) {
  int n, smallest = 0, sum = 0;
  int d1[1000], d2[1000];

  scanf("%d", &n);
  for(int i=0; i<n;i++){
    scanf("%d %d", &d1[i], &d2[i]);
  }

  for(int i=0; i<n; i++){
    smallest = d2[i];
    for(int j=1; j<= d2[i] / d1[i]; j++){
      if( d2[i] - j * d1[i] < smallest){
        smallest = d2[i] - j * d1[i];
      }
    }
    sum+=smallest;
  }

  printf("%d", sum);
  return 0;
}
