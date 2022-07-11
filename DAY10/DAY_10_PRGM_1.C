
 10)
   Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.
   unsigned char G_Eng_EngineTemperature_uchar = 50u ;
   unsigned int G_Eng_EngineRpm_uint = 1000u;
   unsigned char G_Msg_EngineInformation_Byte[5u];

Algorithm:
1.convert unsigned char G_Eng_EngineTemperature_uchar = 50u to hexdecimal values
2.conert unsigned int G_Eng_EngineRpm_uint = 1000u to hexadecimal values
3.Take G_Msg_EngineInformation_Byte[5u] array an assign 5 value.
4.In Register 3 to print the char G_Eng_EngineTemperature_uchar 50u hex decimal value
5.In Register 0 to print the G_Eng_EngineRpm_uint 1000u value 9 t0 13 bits hexa decmial value not distrubing other bits
6.In Register 1 to print the G_Eng_EngineRpm_uint 1000u value 1 t0 8 bits hexa decmial value not distrubing other bits
7.In Register 2 to print the G_Eng_EngineRpm_uint 1000u value 0 t0 2 bits hexa decmial value not distrubing other bits
8.In Register 4 to print the G_Eng_EngineRpm_uint 1000u value all bits are zeros not distrubing other bits */

PROGRAM:
   #include<stdio.h>
  int main(){
   unsigned char G_Eng_EngineTemperature_uchar = 50u ;
   for(int i=7;i>=0;i--){
    printf("%x ",(G_Eng_EngineTemperature_uchar>>i)&1);
   }
  unsigned int G_Eng_EngineRpm_uint = 1000u;
    printf("\n");
    for(int j=12;j>=0;j--){
   printf("%x ",(G_Eng_EngineRpm_uint>>j)&1);
  }
