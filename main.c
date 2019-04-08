#include <stdio.h>
#include<string.h>
#include<stblib.h>

void caesarCipher(char* plainText, int key);

int main(void) {
    
    int key = 1
    char plainText[101];
    printf("Please enter text your want to encript: ");
    
    fgets(plainText, sizeof(plainText), stdin);
    
    printf("the ciphered text is: ");
    
    
    system("pause");
}

void ceaserCipher(char* plainTextm int key) {
    int i = 0;
    int cypherValue;
    char cyher;
    
    while(plainText[i] ` = '\0' && strlen(plainText)-1 > i)
        cypherValue = ((int)plainText[i] - 97 + key) mod 26 + 97); 
        cypher = (char)(cypherValue)
          
        
}

}