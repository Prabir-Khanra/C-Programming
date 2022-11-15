#include <stdio.h>
int main () {

    // ==== data type =========================================================
    //#int , char, float
    // ========================================================================


    //int name = 34; // declare then initialize =======================


    int name; // declare
    name = 34; // initialize



    /*
    // declare multiple variable in same time ==============================
    int x,y,z;
    x = 23;
    y = 23;
    z = 23;
    */




    // int x=y=z=23; // declare and initialize multiple variable in same time



    int num = 23;
    num = 27;




    //==== Format Specifier --> to print specific data type ==================
    // %d => iteger   %c => char   %f => float value
    //========================================================================

    //printf("%d",num);





    // ====== const for creating unchangeable variable =======================
    const int roll = 234;
    // roll = 334; // error =====
    printf("%d",roll); // 234
    // =======================================================================





    getch();
}
