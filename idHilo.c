#include <pthread.h>
#include <stdio.h>

void *funcionHilo(void*);

int main(int argc, char *argv[]) {
	int numhilos = 10;
	pthread_t idhilo;

	for (int i = 0; i <= numhilos; i++) {
		pthread_create(&idhilo, NULL, funcionHilo, NULL);
	}
	printf("mensaje desde el main\n");
	return 0;
}

void *funcionHilo(void *null) {
	printf("hola %d \n", (int)pthread_self());
	pthread_exit(NULL);
}
