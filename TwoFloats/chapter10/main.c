//
//  main.c
//  chapter10
//
//  Created by Nishanth on 27/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#include <stdio.h>

void metersToFeetAndInches(double meters, unsigned int *ftPtr, double *inPtr)
{
    double rawFeet = meters * 3.281;
    unsigned int feet = (unsigned int)floor(rawFeet);
    // Store the number of feet at the supplied address
    if (ftPtr) {
        printf("Storing %u to the address %p\n", feet, ftPtr);
        *ftPtr = feet;
    }
    
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;
    
    if (inPtr) {
        printf("Storing %.2f to the address %p\n", inches, inPtr);
        *inPtr = inches;
    }
}

void metersToFeetAndInchesUsingMod(double meters, unsigned int *ftPtr, double *inPtr)
{
    
    double rawFeet = meters * 3.281;
    unsigned int feet = (unsigned int)floor(rawFeet);
    if (ftPtr) {
        printf("Storing %u to the address %p\n", feet, ftPtr);
        *ftPtr = feet;
    }
    
    double fractionalFoot = modf(rawFeet,&feet);
    double inches = fractionalFoot * 12.0;
    
    if (inPtr) {
        printf("Storing %.2f to the address %p\n", inches, inPtr);
        *inPtr = inches;
    }
    
}


int main(int argc, const char * argv[]) {
    
    double meters=510;
    unsigned int ftPtr;
    double inPtr;
    
    
    metersToFeetAndInchesUsingMod(meters,&ftPtr,&inPtr);
    return 0;
}
