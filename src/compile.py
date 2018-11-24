# Compiles Brainfuck to C
# btw, I've put 0 effort to make this readable
# so, all the best

import sys

def tokenize(source):
	previousSymbol = source[0]
	patternLength = 0

	tokens = []

	for symbol in source:
		if symbol == previousSymbol:
			patternLength += 1
		else:
			tokens.append((previousSymbol, patternLength))
			patternLength = 1
			previousSymbol = symbol
	tokens.append((source[-1], patternLength))

	return tokens

def action_moveRight(token):
	if token[1] == 1:
		return 'PC++;'
	return 'PC = PC + ' + str(token[1]) + ';'

def action_moveLeft(token):
	if token[1] == 1:
		return 'PC--;'
	return 'PC = PC - ' + str(token[1]) + ';'

def action_incrementCell(token):
	if token[1] == 1:
		return 'memory[PC]++;'
	return 'memory[PC] = memory[PC] + ' + str(token[1]) + ';'

def action_decrementCell(token):
	if token[1] == 1:
		return 'memory[PC]--;'
	return 'memory[PC] = memory[PC] - ' + str(token[1]) + ';'

def action_putchar(token):
	return 'putchar(memory[PC]);' * token[1]

def action_getchar(token):
	return 'memory[PC] = getchar();' * token[1]

def action_startLoop(token):
	return 'while(memory[PC]){' * token[1]

def action_endLoop(token):
	return '}' * token[1]

def formatSource(source):
	pass


actions = { '>': action_moveRight, 
			'<': action_moveLeft,
			'+': action_incrementCell,
			'-': action_decrementCell,
			'[': action_startLoop,
			']': action_endLoop,
			'.': action_putchar,
			',': action_getchar
			}

allowedSet = actions.keys()

cBootstrapString = """\
#include <stdio.h>
#include <stdlib.h>

#define MAX_PROG_MEMORY 30000 // 30000 arrays available for manipulation
// Global variable so that we end up in heap instead of stack.

void execute();

int* memory;

int main() {
  memory = (int*) calloc(MAX_PROG_MEMORY, sizeof(int));
  if(memory == NULL) {
  	printf("Error pre allocating memory.\\n");
  	exit(0);
  }

  execute();	
}

void execute() {
    
    int PC = 0;
    
"""

if __name__ == '__main__':
	
	if len(sys.argv) < 3:
		print("Improper arguments")
		exit(-1)

	tokens = tokenize([i for i in open(sys.argv[1], 'r').read() if i in allowedSet])
	# for token in tokens: print(token)
	actionTree = []
	for token in tokens:
		actionTree.append(actions[token[0]](token))

	bfSource = '    ' + ''.join(actionTree)

	open(sys.argv[2], 'w').write(cBootstrapString + bfSource + '\n\n}')










