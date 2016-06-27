//
//  Person.m
//  PeopleDatabase
//
//  Created by Nishanth on 27/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#import "Person.h"

@implementation Person


- (void)enterInfo {
    NSLog(@"What is the first name?");
    char cstring[40];
    scanf("%s", cstring);
    
    firstName = [NSString stringWithCString:cstring encoding:1];
    
    // more code for the other fields to come later...
    
}

- (void)printInfo {
    NSLog(@"First name: %@", firstName);
}

@end
