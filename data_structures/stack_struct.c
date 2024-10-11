# include <stdio.h>
# include <stdbool.h>

# define STACK_SIZE 5

typedef struct {
	int arr[STACK_SIZE];
	int top;
} Stack;

void push(int , int *top, int stack[]);
void pop(int *top);
bool is_stack_full(int top);
bool is_stack_empty(int top);
void print_stack(int stack[], int *top);

int main(){
	Stack stack;
	stack.top = -1;
	pop(&stack.top);

	push(23, &stack.top, stack.arr);
	push(45, &stack.top, stack.arr);
	push(65, &stack.top, stack.arr);
	push(21, &stack.top, stack.arr);
	push(84, &stack.top, stack.arr);
	push(90, &stack.top, stack.arr);
	
	print_stack(stack.arr, &stack.top);
	
	pop(&stack.top);
	pop(&stack.top);
	pop(&stack.top);

	print_stack(stack.arr, &stack.top);
	
	return 0;
}

void push(int a, int *top, int stack[]){
	if(is_stack_full(*top)){
		printf("Cant push, the stack is full! \n");
	} else {
		(*top)++;
		stack[*top] = a;
		printf("Push successful \n");
	}
	
}

void pop(int *top){
	if(is_stack_empty(*top)){
		printf("can't pop, stack is empty! \n");
	} else {
		(*top)--;
		printf("Pop successful! \n");
	}
	
}

bool is_stack_full(int top){
	if(top == STACK_SIZE-1){
		return true;
	}
	else {
		return false;
	}
}

bool is_stack_empty(int top){
	if(top == -1){
		return true;
	} else {
		return false;
	}
}

void print_stack(int arr[], int *top){
	for(int a=0; a<=(*top); a++){
		printf("%d \n", arr[a]);
	}
}
