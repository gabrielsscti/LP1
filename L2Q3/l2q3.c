#include <stdio.h>

int strlen(char *s){//Retorna o tamanho da string.
	int r=0;
	while(*(s++)!='\0')
		r++;
	s = s-r;
	return r;
	
}

void inverteOrdem(char *s){
	char *temp = malloc(sizeof(char)*100);
	int i;
	
	for(i=strlen(s)-1; i>=0; i--){
		if(*(s+i)==' '){
			int j;
			for(j=i+1; *(s+j)!='\0' && *(s+j)!=' '; j++){
				*(temp++)='a';
				printf("%s\n", temp);
			}
			*(temp++)=' ';
		}
	}
	printf("%s", temp);
}

int main(){
	char *s = malloc(sizeof(char)*100);
	fgets(s, 100, stdin);
	inverteOrdem(s);
}
