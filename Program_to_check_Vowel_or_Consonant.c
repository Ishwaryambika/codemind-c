#include<stdio.h>
int main()
{
    char ch;
    int lowercase_Vowel, uppercase_Vowel;
    scanf(" %c", &ch);

    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase_Vowel || uppercase_Vowel)
    {
    	printf("Vowel");
	}
    else {
    	printf("Consonant");
	}
    return 0;
}