Consider a character input from a user and print it is vowel or consonent.

 #include <stdio.h>

int main()
{
    char n;
    printf("e v:");
    scanf("%c",&n);
    if(n=='a'||n=='A'||n=='E'||n=='e'||n=='I'||n=='i'||n=='O'||n=='o'||n=='u'||n=='U')
    printf("vowels");
    else
    printf("consonents");
    return 0;
}
