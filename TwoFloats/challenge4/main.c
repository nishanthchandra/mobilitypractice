//
//  main.c
//  challenge4
//
//  Created by Nishanth on 26/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 20;
    int j = 25;
    int k = ( i > j ) ? 10 : 5;
    
    if ( 5 < j - k ) { // First expression
        printf("The first expression is true.");
    } else if ( j > i ) { // Second expression
        printf("The second expression is true.");
    } else {
        printf("Neither expression is true.\n");
    }
    
    return 0;
    
}
