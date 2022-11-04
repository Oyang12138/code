#include <stdio.h>

int start();
int address();
int end();

int main(){

	start();
	/*注释*/
	printf("Hello World!\n");
	
	address();
	
	end();
	
	return 0;
}

int start(){
	printf("--START--\n");
	return 0;
}

int address(){
	int roob  = 10;
	int *p;
	p = &roob;
	
	printf("roob 的地址是： %p\n", p);
	return 0;
}
