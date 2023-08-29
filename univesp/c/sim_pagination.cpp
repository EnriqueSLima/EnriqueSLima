#include <stdio.h>
#include <stdlib.h>

/*  Defining structures of data to simulate pagination  */

/*  Simulating RAM    */
typedef struct Frame {
    int BitV;
    char contentRAM;
} frame;
/*  Simulating DISC    */
typedef struct Page {
    int vBIT;
    char contentDISC;
    frame *pv;
} page;
    frame RAM[2];
    page DISC[20];
int i, j;

int main() {
    //  Initializing RAM
    for ( i=0 ; i<2 ; i++ )
        RAM[i].BitV = 0;
    //  Pagination
    for ( i=0 ; i<20 ; i++ ){
        DISC[i].contentDISC = 'a' + i ;     //  Creating pages from 'a' to 't'
        DISC[i].vBIT = 1;                   //  Change Validation bit to 1
        DISC[i].pv = NULL;                  //  Pointer of current page to NULL
    //  Simulating as pages 'e' and 'j' is more used, so they go up to RAM
    if ((DISC[i].contentDISC == 'e') || (DISC[i].contentDISC == 'j'))
        for ( j=0 ; j<2 ; j++ )
        if ( RAM[j].BitV == 0 ){            //  Adressing first RAM free space 
            RAM[j].BitV = 1;                //  Change validation bit to 1 (means occupied)
            DISC[i].pv = &RAM[j];           //  Pointer to adress of page in RAM
            RAM[j].contentRAM = DISC[i].contentDISC;
            j = 2;
        }
    }
    printf("\nDISC VISUALIZATION:\n");
    for ( i=0 ; i<20; i++ ) {
        printf("%d page: [ content :  %c -", i+1, DISC[i].contentDISC);
        printf(" BitV: %d -", DISC[i].vBIT);
        printf(" RAM: %p]\n", DISC[i].pv);
    }
    printf("\nRAM VISUALIZATION:\n");
    for ( j=0 ; j<2 ; j++ ){
        printf("%d frame: [ content : %c -", i+1, RAM[j].contentRAM);
        printf(" BitV: %d]\n", RAM[j].BitV);
    }
    return(0);
}