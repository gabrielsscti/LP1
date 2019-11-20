#include <stdio.h>

int strlen(char *s){//Retorna o tamanho da string.
	int r=0;
	while(*(s++)!='\0')
		r++;
	s = s-r;
	return r;
	
}

int ehPalindromo(char *s){//Retorna 1 se é palíndromo, 0 se não.
	int strLength = strlen(s), i;
	for(i=0; i<strLength; i++){
		if(*(s+i)!=*(s+strlen(s)-(i+1)))
			return 0;
	}
	return 1;
}

int main(){
	char *s = malloc(sizeof(char)*100);
	scanf("%s", s);
	printf("%d", ehPalindromo(s));
	
}
