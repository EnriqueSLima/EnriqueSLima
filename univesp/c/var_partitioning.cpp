#include <stdio.h>
#include <string.h>

/*  Declaring structures */

typedef struct {
    unsigned int vBIT; // 0 = partition empty
    int pSize;
    char process[5];
    int jSize;
} partition;

partition RAM[5];
int i;

/*  Declaring functions */
void insertProcess() {
    //  Process allocation
    for ( i=0 ; i<5 ; i++ ) {
        if ( RAM[i].vBIT == 0 & RAM[i].jSize <= RAM[i].pSize ){
            printf("Insert a process: ");
            RAM[i].vBIT = 1;
            scanf("%s", RAM[i].process);
            printf("Insert a size: ");
            scanf("%d", &RAM[i].jSize);
        }
    }

}

void finishProcess(){
    //  Simulation of processor finishing process execution
    for ( i=0 ; i<2; i++ ) {
        strcpy( RAM[i].process, "" );
        RAM[i].vBIT = 0;
        printf("\nProcess %d finished\n", i+1);
    }
}

void printStatus() {
    printf("\nRAM STATUS\n");
    for ( i=0 ; i<5 ; i++ )
        printf("RAM partition %d: BV:[%d] Size:[%d] Proc:[%s]\n", i+1, RAM[i].vBIT, RAM[i].pSize, RAM[i].process);
}

int main() {
    //  RAM initialization
    for ( i=0 ; i<5 ; i++ ) {
        RAM[i].vBIT = 0;
        RAM[i].pSize = (i + 1) * 5;
    }
   
    insertProcess();
    printStatus();
    finishProcess();
    printStatus();
    insertProcess();
    printStatus();


    return(0);
}