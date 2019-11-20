#include <stdio.h>
#define DEBUG(x) printf("%d\n", x)

void toUpper(char *s){
    int i=0;
    while(*(s+i)!='\0'){
    	*(s+i) = *(s+i++)-32;
	}
}

int main(){
    char *s = malloc(sizeof(char)*10);
    scanf("%s", s);
    toUpper(s);
	printf("%s", s);
}
