# include <stdio.h>
# include <stdlib.h>

int func(int (*a) [5]){
    int a_len = sizeof(*a)/sizeof(int);
    printf("%d\n", a_len);
}

int main()
{
    int a[5] = {1,2,3,4,5}; 
    int (*p) [5] = &a;
    printf("%p /n", *&a);
    printf("pointer:%p value:%p value:%d \n", p, *p,**p);
    func(p);
    return 0;
}
