#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pid1, pid2, pid3;
	clock_t start, end;

	start = clock();
	pid1 = fork();
	pid2 = fork();
	pid3 = fork();

	if(pid1 == 0){
		/*hijo (primera generacion) = padre*/
		if(pid2 == 0){
			/*Nieto*/
		}else{
			/*bisnieto*/
			for(int i = 0; i<10000000; i++){
				wait(NULL);
			}
		}
    }
    end = clock();
    double rest = end - start;
	printf("%f\n", rest);
}