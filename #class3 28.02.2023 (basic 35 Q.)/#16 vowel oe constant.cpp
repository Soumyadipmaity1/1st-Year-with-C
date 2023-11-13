// Vowel or Consonant


#include <stdio.h>
int main()
 {
    char c; int lc_vowel, uc_vowel;
    printf("Enter an alphabet ");
    scanf("%c", &c);

    lc_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uc_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (lc_vowel || uc_vowel){
	
        printf("%c is a vowel.", c);
    }
    else
        printf("%c is a consonant.", c);
    return 0;
}