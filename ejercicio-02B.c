#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pid1, pid2, pid3;
	clock_t start, end;

	start = clock();
	pid1 = fork();
	/*proceso hijo*/
	if(pid1 == 0){
		pid2 = fork();
		/*proceso nieto*/
		if(pid2 == 0){
			pid3 = fork();
			/*proceso bisnieto*/
			if(pid3 == 0){
				/*ciclo de un millon de interacciones*/
				for(int i=0; i<1000000; i++){}
			}else{
				/*ciclo de un millon de interacciones*/
				for(int i=0; i<1000000; i++){}
				wait(NULL) 
			}else{
				/*ciclo de un millon de interacciones*/
				for(int i=0; i<1000000; i++){}
				wait(NULL) 
			}
		}
    } else{
    	wait(NULL);
    	end = clock();
    	/*tiempo de ejecucion*/
    	double rest = (double)(end - start);
    	printf("%f\n", rest);
    	return 0;
    }
    
}