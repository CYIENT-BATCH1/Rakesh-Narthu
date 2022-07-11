// Take a 6-digit number as input from the user and reverse the number. Make sure that the number does not include a ‘0’ in any of its digits.
#include<stdio.h>
int main(){
  int n=111222,r=0;
  while(n>0){
    r=r*10+n%10;
    n=n/10;
  }
  printf("%d",r);
}
