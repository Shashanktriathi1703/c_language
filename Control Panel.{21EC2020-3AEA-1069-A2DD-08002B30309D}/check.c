#include <stdio.h>
int main();
{
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("enter the alphabet:");
    scanf("%c", &c);
    /*lowercase_vowel = (c == 'a' || c == 'e' || c == 'u' || c == 'o' || c == 'i');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'U' || c == 'O' || c == 'I');
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel",c);
    else
        printf("%c is a consonant",c);*/
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf(" Character is Vowel");
	}
	else
	{
		printf("Character is consonant");
	}

    return 0;
}