/*     fgroups.c
 *     by Jon Atkins and Karan Singhal, 1/27/14
 *     Assignment 1
 *
 *     summary
 */ 

#include "fgroups.h"

int main( int argc, const char* argv[] )
{
        (void)argc;
        (void)argv;

        //dString line;

        while (fgets(line, 1024, stdin) != NULL) {
                fprintf(stdout, "%s\n", line);
        }

        int counter = 0;
        char input;

        dString fingerprint;
        dString name;
        
        
        //gets the entire line
        while ( (input = fgetc( stdin ) ) != '\n' ){
                line[counter] = input;
                fprintf(stdout, "%s\n", line);
                counter++;
        }
        
        //reads from line 
        fscanf(line, "%s %s", fingerprint, name);
        fprintf(stdout, "fingerprint:%s name: %s\n", fingerprint, name);
        
       
        while ( (input = fgetc( stdin ) ) != '\n' ){
                fingerprint[counter] = input;
                fprintf(stdout, "%s\n", fingerprint);
                counter++;
        }*/
        return 0;
}
