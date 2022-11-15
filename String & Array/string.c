#include<stdio.h>

int main() {
    //name = "Akshay Kumar"; // in python
    int i;
    // Sequence of character
    char name[20] = {'A','k','s','h','a','y','\0'};
    char my_name[20] = "Akshay";



	/*
    for (i=0;i<5;i++){
        printf("%c\n",name[i]);
    }
    */




    /*
    for (i=0;name[i]!='\0' ;i++){
        printf("%c\n",name[i]);
    }
    */



	// Here we are going to proove that array name points the first item's momory address
    // printf("%s",&name[0]); // &name[0] - defines first item's memory address
    // printf("%s",name);

    puts(name); // used to print only string value


    getch();
}
