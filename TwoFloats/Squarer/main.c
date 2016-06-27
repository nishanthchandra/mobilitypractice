//
//  main.c
//  Squarer
//
//  Created by Nishanth on 26/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#include <stdio.h>
#include <math.h>
void squarer(int a) {
    printf("\"%d\" squared is \"%d\".\n", a, a*a);
}

int main(int argc, const char * argv[]) {
    squarer(5);
    printf("Sine(1 radian) = %.3f\n",sin(1));
    return 0;
}