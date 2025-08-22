# include <stdio.h>
# include <pthread.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>

int main(){
    char str[] = "Saraswati Complex, Flat No. 15, A Wing, Near Saneguruji Hospital, Malwadi Road, Hadapsar, Pune - 411028.";
    int str_len = sizeof(str)/sizeof(char);
    printf("%d\n", str_len - 1);
    return 0;
}