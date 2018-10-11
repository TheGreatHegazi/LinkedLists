#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main (void){

	int n = 1;

	newList();

	while (n > 0 ) {
		printf("Enter number:\n");
		scanf("%d", &n);
		
		if ( n <= 0) {break;}
	
		addNode(n);	
	}	
	prettyPrint();
}

