#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t pid_padre, pid_hijo;

	if((pid_hijo = fork()) == 0){
		for(int conteo=0; conteo<4000000; conteo++){
			printf("%d\n", conteo);
		}
	}else{
		while(1){}
	}

	return 0;
}