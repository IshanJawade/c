# include <stdio.h>

# define STACK_SIZE 5

int stack[STACK_SIZE];
int top = -1;

void push(int x){
	if(top == 4){
		printf("Stack is full \n");
		return;
	} else {
		top ++;
		stack[top] = x;
		printf("Push successfull \n");
	}
}

void pop(){
	if(top == -1){
		printf("Can't pop, stack is empty! \n");
	} else {
		top --;
		printf("Pop successful! \n");
	}
}

void print_stack(){
	for(int a=0; a<=top; a++){
		printf("%d \n", stack[a]);
	}
}

int main(){
	push(34);
	push(64);
	push(21);

	pop();

	print_stack();
	return 0;
}