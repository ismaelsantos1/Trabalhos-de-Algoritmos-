#include <stdio.h>


int main(){
  float x, y, z;
  float media;
  
  printf("\n Digite a primeira nota: ");
  scanf("%f", &x);
  
  printf("\n Digite a segunda nota: ");
  scanf("%f", &y);
  
  printf("\n Digite a terceira nota: ");
  scanf("%f", &z);
  
  media = ((x*4) + (y*5) + (z*6))/15;
  
  printf("Sua média foi: %.2f", media);

  
  return 0;
}