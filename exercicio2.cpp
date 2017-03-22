#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	char c;
	c = getchar();
	if(c == 'c' || c == 'C'){
		srand(time(NULL) );
		int f = 100 + (rand() % 1000);
		printf("\n%d",f);
	}
}
