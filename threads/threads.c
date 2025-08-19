# include <stdio.h>
# include <pthread.h>

void *computation();

int main(){
 pthread_t thread1;
 pthread_t thread2;

 pthread_create(&thread1, NULL, computation, NULL);

 pthread_create(&thread2, NULL, computation, NULL);

 pthread_join(thread1, NULL);
 pthread_join(thread2, NULL);

 return 0;
}

void *computation(){
 printf("Computation called\n");
}
