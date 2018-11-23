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

main:
    memory[PC]++;
    
loop1: if(!memory[PC]) goto endloop1;
    memory[PC]--;
    
loop2: if(!memory[PC]) goto endloop2;
    PC = PC - 2;
    
loop3: if(!memory[PC]) goto endloop3;
    memory[PC]++;
    
loop4: if(!memory[PC]) goto endloop4;
    memory[PC] = memory[PC] - 3;
    PC++;
    endloop4: if(memory[PC]) goto loop4;

    memory[PC]--;
    
loop5: if(!memory[PC]) goto endloop5;
    PC = PC - 3;
    endloop5: if(memory[PC]) goto loop5;
endloop3: if(memory[PC]) goto loop3;
endloop2: if(memory[PC]) goto loop2;

    PC = PC + 3;
    memory[PC]--;
    endloop1: if(memory[PC]) goto loop1;

    PC++;
    memory[PC]--;
    putchar(memory[PC]);
    memory[PC] = memory[PC] - 3;
    putchar(memory[PC]);
    PC++;
    putchar(memory[PC]);putchar(memory[PC]);
    PC++;
    putchar(memory[PC]);
    PC = PC - 4;
    memory[PC]--;
    putchar(memory[PC]);
    PC--;
    memory[PC]++;
    putchar(memory[PC]);
    PC = PC + 5;
    putchar(memory[PC]);
    PC++;
    putchar(memory[PC]);
    PC = PC - 2;
    putchar(memory[PC]);
    PC--;
    memory[PC]--;
    putchar(memory[PC]);

}