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
    PC++;
    memory[PC] = memory[PC] + 9;
    
loop1: if(!memory[PC]) goto endloop1;
    PC--;
    memory[PC] = memory[PC] + 8;
    PC++;
    memory[PC]--;
    endloop1: if(!memory[PC]) goto loop1;

    PC--;
    putchar(memory[PC]);
    PC++;
    memory[PC] = memory[PC] + 7;
    
loop2: if(!memory[PC]) goto endloop2;
    PC--;
    memory[PC] = memory[PC] + 4;
    PC++;
    memory[PC]--;
    endloop2: if(!memory[PC]) goto loop2;

    PC--;
    memory[PC]++;
    putchar(memory[PC]);
    memory[PC] = memory[PC] + 7;
    putchar(memory[PC]);putchar(memory[PC]);
    memory[PC] = memory[PC] + 3;
    putchar(memory[PC]);
    
loop3: if(!memory[PC]) goto endloop3;
    memory[PC]--;
    endloop3: if(!memory[PC]) goto loop3;

    PC++;
    memory[PC] = memory[PC] + 8;
    
loop4: if(!memory[PC]) goto endloop4;
    PC--;
    memory[PC] = memory[PC] + 4;
    PC++;
    memory[PC]--;
    endloop4: if(!memory[PC]) goto loop4;

    PC--;
    putchar(memory[PC]);
    PC++;
    memory[PC] = memory[PC] + 11;
    
loop5: if(!memory[PC]) goto endloop5;
    PC--;
    memory[PC] = memory[PC] + 8;
    PC++;
    memory[PC]--;
    endloop5: if(!memory[PC]) goto loop5;

    PC--;
    memory[PC]--;
    putchar(memory[PC]);
    memory[PC] = memory[PC] - 8;
    putchar(memory[PC]);
    memory[PC] = memory[PC] + 3;
    putchar(memory[PC]);
    memory[PC] = memory[PC] - 6;
    putchar(memory[PC]);
    memory[PC] = memory[PC] - 8;
    putchar(memory[PC]);
    
loop6: if(!memory[PC]) goto endloop6;
    memory[PC]--;
    endloop6: if(!memory[PC]) goto loop6;

    PC++;
    memory[PC] = memory[PC] + 8;
    
loop7: if(!memory[PC]) goto endloop7;
    PC--;
    memory[PC] = memory[PC] + 4;
    PC++;
    memory[PC]--;
    endloop7: if(!memory[PC]) goto loop7;

    PC--;
    memory[PC]++;
    putchar(memory[PC]);
    
loop8: if(!memory[PC]) goto endloop8;
    memory[PC]--;
    endloop8: if(!memory[PC]) goto loop8;

    memory[PC] = memory[PC] + 10;
    putchar(memory[PC]);

}