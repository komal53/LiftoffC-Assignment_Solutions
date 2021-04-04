#include <stdio.h>
#include <string.h>

union book
{
            char author[50];
            char name[50];
};

int main()
{
    union book record1;
    union book record2;


       printf("Union record1 values example\n");
       strcpy(record1.author, "Dr. R.S Aggarwal");
       printf(" author       : %s \n", record1.author);

       strcpy(record1.name, "Quantitative Aptitude");
       printf(" name    : %s \n", record1.name);


       printf("Union record2 values example\n");
       strcpy(record2.author, "J.R.R. Tolkien");
       printf(" author       : %s \n", record2.author);

       strcpy(record2.name, "The Lord Of The Rings");
       printf(" name    : %s \n", record2.name);


       return 0;
}
