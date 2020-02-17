#include <stdio.h>
#include <unistd.h>

int main(){
	fork();
	fork();
	fork();
	fork();

	printf("PID!\n");
	return 0;
}
