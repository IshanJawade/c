# include <stdio.h>

int main(){

    float fpi = 3.14159265358979;
    double dpi = 3.14159265358979;
    double chargeE = -1.60217662e-19;    // charge of an electron

    printf("float: %f\n", fpi);           // prints 6 decimal places
    printf("double: %.10lf\n", fpi);     // prints 10 decimal places
    printf("Scientific Notation: %0.2e\n", dpi);
    printf("Charge of an Electron: %0.8le\n", chargeE);
    
    return 0;
}