//
//  main.m
//  chapter13
//
//  Created by Nishanth on 27/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSHost *host =[NSHost currentHost];
        
        NSString *name=[host localizedName];
        NSLog(@"HOST NAME IS %@\n",name);

    }
    return 0;
}
