#include<stdio.h>
 
int main()
{
	char message[100], me;
	int i, key;
	
	printf("What would you like to encrypt: ");
	gets(message);
	printf("what is the key?: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		me = message[i];
		
		if(me >= 'a' && me <= 'z'){
			me = me + key;
			
			if(me > 'z'){
				me = me - 'z' + 'a' - 1;
			}
			
			message[i] = me;
		}
		else if(me >= 'A' && me <= 'Z'){
			me = me + key;
			
			if(me > 'Z'){
				me = me - 'Z' + 'A' - 1;
			}
			
			message[i] = me;
		}
	}
	
	printf("Encrypted message: %s", message);
	
	return 0;
}