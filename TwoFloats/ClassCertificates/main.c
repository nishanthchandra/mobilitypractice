//
//  main.c
//  ClassCertificates
//
//  Created by Nishanth on 26/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays){
    printf("%s has done %s programming as I could fit into %d days.\n", student, course, numDays);
}

int main(int argc, const char * argv[]) {
    congratulateStudent("Kate", "Cocoa", 5);
    congratulateStudent("Nishanth", "iOS", 3);
    congratulateStudent("Mike", "Objective-C", 1);
    return 0;
}
