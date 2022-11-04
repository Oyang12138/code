#include <stdio.h>

void readFile();
void writeFile();
void sort();

int main(){

	//writeFile();
	//readFile();
	
	sort();
	
	return 0;
}

void sort(){
	int array[] = {13,31,34,4,6,3,2,5754,3,7,457,6,83,632,7,2,734};
	int length = (int) sizeof(array) / sizeof(*array);
	int minIndex;
	printf("*********排序前*********\n");
	for(int i = 0 ; i < length; i++){
		printf("%d\t",array[i]);
	}
	
	printf("\n*********排序后*********\n");
	for(int i = 0 ; i < length - 1; i++){
		minIndex = i;
		for(int j = i+1 ; j < length; j++){
			if(array[minIndex] > array[j]){
				minIndex = j;
			}
			
		}
		if(minIndex != i){
			int temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
		}		
	}
	for(int i = 0 ; i < length; i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
}

void writeFile(){
	FILE *file = NULL;
	int n = 0;
	int index = -1;
	char buffer[1024];
	char buff[1024];
	
	file = fopen("helloWorld.txt","w+");
	//fprintf(file,"...\n");//都能执行写入操作
	//fputs("fput\n",file);//都能执行写入操作
	
	printf("======记录笔记（键入exit结束）：\n");
	while(n == 0){
		scanf("%s",buffer);
					
		for(int i = 0 ; i < 1024; i++){
			if(i < 1020 && buffer[i]=='e'){
				index = i;
				if(buffer[i+1]=='x' && buffer[i+2]=='i' && buffer[i+3]=='t'){
					n = 1;
					for (int k = 0 ; k < i; k ++){
						buff[k] = buffer[k];	
					}
					break;
				}
			}
		}
		
		if(index != 0){
			fputs(n == 0 ? buffer : buff,file);
			fputs("\n",file);
		}
	}
	
	fclose(file);
}

void readFile(){
	FILE *file = NULL;
	char buffer[1024];
	int n = 0;
	
	file = fopen("helloWorld.txt", "r");
	
	printf("=======以下是文本文件内容：\n");
	while (fgets(buffer,1024,(FILE*)file) != NULL){
		
		printf("%s",buffer);
		
	}
	
	fclose(file);
}
