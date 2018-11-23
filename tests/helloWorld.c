#include <stdio.h>
#include <stdlib.h>

#define MAX_PROG_MEMORY 300 // 30000 arrays available for manipulation

void execute();

int* memory;
int PC = 0;

int main() {
  memory = (int*) calloc(MAX_PROG_MEMORY, sizeof(int));
  if(memory == NULL) {
  	printf("Error pre allocating memory.\n");
  	exit(0);
  }

  execute();	
}

void execute() {
label0:
    PC++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;

label1:
    printf("\nlabel1\n");
    PC--;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    PC++;
    memory[PC]--;
    if(memory[PC]) goto label1;
    PC--;
    putchar(memory[PC]);
    PC++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;

label2:
    printf("\nlabel2\n");
    PC--;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    PC++;
    memory[PC]--;
    if(memory[PC]) goto label2;
    PC--;
    memory[PC]++;
    putchar(memory[PC]);
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    putchar(memory[PC]);
    putchar(memory[PC]);
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    putchar(memory[PC]);

label3:
    printf("\nlabel3\n");
    memory[PC]--;
    if(memory[PC]) goto label3;
    PC++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;

label4:
    printf("\nlabel4\n");
    PC--;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    PC++;
    memory[PC]--;
    if(memory[PC]) goto label4;
    PC--;
    putchar(memory[PC]);
    PC++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;

label5:
    printf("\nlabel5\n");
    PC--;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    PC++;
    memory[PC]--;
    if(memory[PC]) goto label5;
    PC--;
    memory[PC]--;
    putchar(memory[PC]);
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    putchar(memory[PC]);
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    putchar(memory[PC]);
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    putchar(memory[PC]);
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    memory[PC]--;
    putchar(memory[PC]);

label6:
    printf("\nlabel6\n");
    memory[PC]--;
    if(memory[PC]) goto label6;
    PC++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;

label7:
    printf("\nlabel7\n");
    PC--;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    PC++;
    memory[PC]--;
    if(memory[PC]) goto label7;
    PC--;
    memory[PC]++;
    putchar(memory[PC]);

label8:
    printf("\nlabel8\n");
    memory[PC]--;
    if(memory[PC]) goto label8;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    memory[PC]++;
    putchar(memory[PC]);
}
