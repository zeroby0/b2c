source = open("helloWorld.bf", 'r')
output = open("helloWorld.c", 'w')

cBootstrapString = """\
#include <stdio.h>
#include <stdlib.h>

#define MAX_PROG_MEMORY 300 // 30000 arrays available for manipulation

void execute();

int* memory;
int PC = 0;

int main() {
  memory = (int*) calloc(MAX_PROG_MEMORY, sizeof(int));
  if(memory == NULL) {
  	printf("Error pre allocating memory.\\n");
  	exit(0);
  }

  execute();	
}

void execute() {
label0:
"""

output.write(cBootstrapString)

labelCount = 1
labelList = []

while True:
	char = source.read(1)

	if not char:
		break # EOF

	# if char not in ['>', '<', '+', '-', '[', ']', ',', '.']:
	# 	continue # Comment. Skip this char



	if char == '>':
		output.write('    ' + 'PC++;\n')
	elif char == '<':
		output.write('    ' + 'PC--;\n')
	elif char == '+':
		output.write('    ' + 'memory[PC]++;\n')
	elif char == '-':
		output.write('    ' + 'memory[PC]--;\n')
	elif char == '.':
		output.write('    ' + 'putchar(memory[PC]);\n')
	elif char == ',':
		output.write('    ' + 'memory[PC] = getchar();\n')
	elif char == '[':
		output.write('\nlabel' + str(labelCount) + ':\n')
		output.write('    ' + 'printf("\\nlabel' + str(labelCount) + '\\n");\n')

		labelList.append(labelCount)
		labelCount += 1
	elif char == ']':
		output.write('    ' + 'if(memory[PC]) goto label' + str(labelList.pop()) + ';\n')
	else:
		pass







output.write("}\n")

source.close()
output.close()