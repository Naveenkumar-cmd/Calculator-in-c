#include <stdio.h>

int main() {
    int n;
    float a,b,sum,diff,mul,div;
    printf("enter 1 to calculate sum:\n2 for diff:\n3 for mul:\n4 for div:\n");
    scanf("%d",&n);
    
    printf("enter 1st no.:\n");
    scanf("%f",&a);
    printf("enter 2nd no.:\n");
    scanf("%f",&b);
    
    
    switch(n){
      
      case 1:
      sum = a+b;
      printf("sum =%f",sum);
      break;
      
      case 2:
      diff = a-b;
      printf("diff = %f",diff);
      break;
      
      case 3:
      mul = a*b;
      printf("multiply =%f",mul);
      break;
      
      case 4:
      div = a/b;
      printf("division=%f",div);
      break;
      
      default:
      printf("enter the valid option only.");
      
           
  }
    return 0;
}
