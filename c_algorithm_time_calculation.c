//this c code calculates how many seconds the algorithm takes.

//Library inclusion
#include <stdio.h>
#include <time.h>

int main() {
    //setbuf(stdout, 0);
    double x;
    printf("calculating...");
    clock_t start = clock();
    /*
     *
       ***** Define the algorithm. *****
    *
    */
    clock_t end =clock();
    clock_t res=end-start;
    printf("this algorithm takes %f seconds\n",(double)res/CLOCKS_PER_SEC);

    return 0;
}
