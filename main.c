/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * Chapter2: chapter2.c
 * Raed Makki - Aug 28, 2017, 7:34:26 PM
 */

/*
 * Menu driver for practice C programming files
 * Each C project must have one - and ONLY one - main() function
 * The main() function serves as the starting point
 * Steps to add a practice file:
 * 1. Right-click Source Files -> New -> C Source File -> provide name and select 'c' extension.
 * 2. Write your code. For the chapter practice files, substitute void somename(void) instead of int main(void). Omit the return. Save.
 * 3. Add the prototype definition.
 * 4. Add a menu option.
 * 5. Add a case block. Save.
 * 6. Run project.
 * 7. Debug as needed.
 */


#include <stdio.h>   //header file for input/output

int menu(void);   //prototype definition
void first(void);
void fathm_ft(void);



int main(void)
{
    int selection = menu();  //variable declaration and initialization via call to menu()
    //The line above also serves as the 'priming' read for the following while loop
    
    
    while(selection != 99) {
    
        // The switch statement is similar to a chained if-else except conditions fall through in C!
        switch(selection) {

        case 1:
            first();
            break;
                       
        case 2:
            fathm_ft();
            break;
         
        case 3:   
            break;

         default: /* Optional - but a good idea expecially if you have no other error catching! */
            printf("Please enter a valid selection.\n");
        }
        
    selection = menu();    // get the next menu selection, otherwise, you have an eternal loop!
    }
    
   return 0;
}
 
int menu(void) {
    int choice;
    printf("***************************\n");
    printf(" 1. First \n");
    printf(" 2. Fathoms to feet \n");
    printf(" 3. Two functions \n");
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    return choice;   
}