#include <stdio.h>
#include <string.h>

/*  Code for simulate fixed partitioning    */

/*  Defining structures */
typedef struct {
    unsigned int vBIT; // 0 = partition empty
    char process[5];
} partition; 

partition RAM[10];

int main() {
    int i;
    //  RAM initialization
    for ( i=0 ; i<10 ; i++ ) {
        RAM[i].vBIT = 0;
    }
    //  Process allocation
    for ( i=0 ; i<10 ; i++ ) {
        if ( RAM[i].vBIT == 0 ){
            printf("Insert a process: ");
            RAM[i].vBIT = 1;
            scanf("%s", RAM[i].process);
        }
    }
    
    //  Simulation of processor finishing process execution
    strcpy(RAM[2].process, "");
    RAM[2].vBIT = 0;
    printf("\n3th process finished\n");
    strcpy(RAM[8].process, "");
    RAM[8].vBIT = 0;
    printf("9th process finished\n");
    
    //  Visualization of simulated RAM
    printf("\nRAM STATUS\n");
    for ( i=0 ; i<10 ; i++ )
        printf("RAM partition %d: [%d][%s]\n", i + 1, RAM[i].vBIT, RAM[i].process);

    //  NEW allocation
    for ( i=0 ; i<10 ; i++ ) {
        if ( RAM[i].vBIT == 0 ){
            printf("\n");
            printf("Insert a process: ");
            RAM[i].vBIT = 1;
            scanf("%s", RAM[i].process);
        }
    }
    
    // NEW Visualization of simulated RAM
    printf("\nRAM STATUS\n");
    for ( i=0 ; i<10 ; i++ )
        printf("RAM partition %d: [%d][%s]\n", i + 1, RAM[i].vBIT, RAM[i].process);

    return(0);
}