//
//  Person.h
//  PeopleDatabase
//
//  Created by Nishanth on 27/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject{
    
    NSString *firstName;
    NSString *lastName;
    int age;
}

- (void)enterInfo;
- (void)printInfo;

@end