# include <stdio.h>
# include <pthread.h>

void *computation(void *add);

int main(){
    pthread_t thread1;
    pthread_t thread2;
    pthread_t thread3;
    pthread_t thread4;
    pthread_t thread5;

    long value1 = 1;
    long value2 = 2;
    long value3 = 3;
    long value4 = 4;
    long value5 = 5;

    // computation((void*) &value1);
    // computation((void*) &value2);
    // computation((void*) &value2);
    // computation((void*) &value2);
    // computation((void*) &value2);

    pthread_create(&thread1, NULL, computation, (void*) &value1);
    pthread_create(&thread2, NULL, computation, (void*) &value2);
    pthread_create(&thread3, NULL, computation, (void*) &value3);
    pthread_create(&thread4, NULL, computation, (void*) &value4);
    pthread_create(&thread5, NULL, computation, (void*) &value5);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);
    pthread_join(thread5, NULL);

    return 0;
}

void *computation(void *add){
    long sum = 0;
    long *add_num = (long *) add;

    for(long i=0; i<1000000000; i++){
        sum = sum + *add_num;
    }
    printf("Ans: %ld\n", sum);
}
