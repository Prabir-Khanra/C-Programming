#include <stdio.h>

// what is garbage value: =======================================
//The Garbage value is a random value at an address in the memory of a computer.
//Whenever a variable is defined without giving any value to it, it contains any random value.
// The value of the memory of the computer can be anything unless a definite value is given to it.


int main () {
    int x = 67;
    // array  =====> group of similar elements
    int price[3]; // declare
    price[0] = 10; // inti ..
    price[1] = 20;
    price[2] = 30;
    // price[3] = 40; // error





    int a[5]; // declare
    a[0] = 1; // init ...
    a[3] = 21;// init ...
	// contain garbage value in another blocks





    int roll = 34; // declare => inti..

    int roll2; // decla
    //roll2 = 45;// init






    // int b[4] = {2,3,4,5};
    int b[] = {2,3,4,5};

    int c[3] = {9,3,4,5,6}; // error

    int d[6] = {3,4}; // contain 0 in another blocks




    getch();
}
