#include<stdio.h>


// Declaration: the function's name, return type, and parameters (if any)
void showAddress(); // declare function




// function without perameter =========================================
void showName() {
    printf("Gourav Nath\n");
}





// function with perameter ============================================
void showRoll(int a){
    printf("%d\n",a);
}





// function with return statement =====================================
float showPrice(float price) {
    return price;
}





int main() {

    int x = 10; // declare && initialize

    showName();

    showRoll(121);

    showAddress();

    float a = showPrice(100.5);

    printf("%f",a);

    // printf("%f",showPrice(100.5))

    getch();
}






// Definition: the body of the function (code to be executed) ==========
void showAddress() {
    printf("Tamluk\n");
}



