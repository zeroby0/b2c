#include <stdio.h>
#include <stdlib.h>

#define MAX_PROG_MEMORY 30000 // 30000 arrays available for manipulation

void execute();

int* memory;

int main() {
  memory = (int*) calloc(MAX_PROG_MEMORY, sizeof(int));
  if(memory == NULL) {
  	printf("Error pre allocating memory.\n");
  	exit(0);
  }

  execute();	
}

void execute() {
    
    int PC = 0;
    
    PC++;memory[PC] = memory[PC] + 9;while(memory[PC]){PC--;memory[PC] = memory[PC] + 8;PC++;memory[PC]--;}PC--;putchar(memory[PC]);PC++;memory[PC] = memory[PC] + 7;while(memory[PC]){PC--;memory[PC] = memory[PC] + 4;PC++;memory[PC]--;}PC--;memory[PC]++;putchar(memory[PC]);memory[PC] = memory[PC] + 7;putchar(memory[PC]);putchar(memory[PC]);memory[PC] = memory[PC] + 3;putchar(memory[PC]);while(memory[PC]){memory[PC]--;}PC++;memory[PC] = memory[PC] + 8;while(memory[PC]){PC--;memory[PC] = memory[PC] + 4;PC++;memory[PC]--;}PC--;putchar(memory[PC]);PC++;memory[PC] = memory[PC] + 11;while(memory[PC]){PC--;memory[PC] = memory[PC] + 8;PC++;memory[PC]--;}PC--;memory[PC]--;putchar(memory[PC]);memory[PC] = memory[PC] - 8;putchar(memory[PC]);memory[PC] = memory[PC] + 3;putchar(memory[PC]);memory[PC] = memory[PC] - 6;putchar(memory[PC]);memory[PC] = memory[PC] - 8;putchar(memory[PC]);while(memory[PC]){memory[PC]--;}PC++;memory[PC] = memory[PC] + 8;while(memory[PC]){PC--;memory[PC] = memory[PC] + 4;PC++;memory[PC]--;}PC--;memory[PC]++;putchar(memory[PC]);while(memory[PC]){memory[PC]--;}memory[PC] = memory[PC] + 10;putchar(memory[PC]);

}