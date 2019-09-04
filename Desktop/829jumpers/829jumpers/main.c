//
//  main.c
//  829jumpers
//
//  Created by Szeto, Colin on 8/28/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float amount;
    char name [15];
    
    printf("Name your Jumper: ");
    scanf("%s", &name[15]);
    printf("How many jumps: ");
    scanf("%f", &amount);
    
    int countdown = amount;
    char * bedJumpers= &name[15];
    
    int i = countdown;
    while (i > -1) { // while is a control flow statement, observe blocks of code
        
        if (i == 0) {
            printf("Zero little %s\n", bedJumpers);
            printf("All of the %s are now dead", bedJumpers);
        } else {
            printf("%i little %s jumping on the bed\n", i, bedJumpers);
            printf("One fell off and broke his head\n");
            printf("Mama called the doctor and the doctor said\n");
            printf("no more %s jumping on the bed.\n", bedJumpers);
        }
        
        i--;
    }
    
}
