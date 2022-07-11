int main()
{
char ADCON0bits_t, CMCONbits_t,i;

ADCON0bits_t = 0x3C; //Intialize with 0x3C
CMCONbits_t = 0x02;//Intialize with 0x02

for(i=7;i>=0;i--)
printf("%d", (ADCON0bits_t>>i)&1);
puts("");
if(((ADCON0bits_t>>2)&(0x0F)) == 0x07)
CMCONbits_t = 0xF0;
for(i=7;i>=0;i--)
printf("%d", (CMCONbits_t>>i)&1);

return 0;
}

