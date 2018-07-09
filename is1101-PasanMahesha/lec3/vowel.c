#include <stdio.h>
int main() {
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    // evaluates to 1 (true) if c is a lowercase vowel
   if (isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){
	printf("%c is a lower case vowel = %d \n",c,isLowercaseVowel==isLowercaseVowel);

    // evaluates to 1 (true) if c is an uppercase vowel
   }else if (isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')){
	printf("%c is a Upper case vowel = %d \n",c,isUppercaseVowel==isUppercaseVowel);

	}else
		printf("Input Charactor is not a vowel\n");
    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
   
   return 0;
}
