8.Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”
 
 Algorithm:

1.Instilize and declare the varables.
2)We want to set CHS2, CHS1, CHS0 bits are set to 0x06 in register “ADCON0”
      -->right 2times should be equal to this bits CHS3, 
3)After that you can do  right shift with above register so this bits are in set the requirement
4)To take the output.
  
  PROGRAM:

 #include <stdio.h>
 int main()
  {
  int num1,num2,pos=3,pos1=6,pos2=7;
  printf("enter the values");
  scanf("%d%d",&num1,&num2);
  if((48 & num1) == 48)
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);
      printf("%d",num2);
  }
  else
  printf(" not equal ");

 }    

