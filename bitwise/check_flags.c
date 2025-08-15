# include <stdio.h>

// globally declared 8bit flag
unsigned int flag = 0b00001010;

#define flag_A (1 << 0) // 1st bit
#define flag_B (1 << 1) // 2nd bit
#define flag_C (1 << 2) // 3rd bit
#define flag_D (1 << 3) // 4th bit

int check_flag(int f){
    switch (f)
    {
    case 1: return (flag & flag_A) != 0; 
    case 2: return (flag & flag_B) != 0; 
    case 3: return (flag & flag_C) != 0; 
    case 4: return (flag & flag_D) != 0; 
    default:
        printf("Enter invalid input.");
        return -1;
    }
}

int main(){
    
    printf("Flag A is %s\n", check_flag(1) ? "ON" : "OFF");
    printf("Flag B is %s\n", check_flag(2) ? "ON" : "OFF");
    printf("Flag C is %s\n", check_flag(3) ? "ON" : "OFF");
    printf("Flag D is %s\n", check_flag(4) ? "ON" : "OFF");

    return 0;
}
