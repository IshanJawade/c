# include <stdio.h>

// function prototype
void func1();

int main(){
    func1();
    func1();
    func1();
    func1();
    func1();
    func1();
    func1();
    func1();
}

void func1(){
    // this is a "Gloabl Variable" but Private only accessible in func1
    static int count = 0;

    count = count + 1;
    printf("This function executed %d time(s).\n", count);
}