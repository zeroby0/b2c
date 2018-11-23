print("Brainfuck compiler version 0.0.1")

source = open("helloWorld.bf", r)
output = open("helloWorld.c", w)

cBootstrapString = """
#include <stdio.h>

int execute();

int main() {
  execute();	
}

int execute() {

"""

output.write(cBootstrapString)




close(source)
close(output)