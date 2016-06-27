//
//  main.m
//  chapter14_2
//
//  Created by Nishanth on 27/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSDate *currentDate=[[NSDate alloc] init];
        
        NSDateComponents *comps=[[NSDateComponents alloc] init];
        
        [comps setYear:1992];
        [comps setMonth:1];
        [comps setDay:01];
        [comps setHour:8];
        [comps setMinute:30];
        [comps setSecond:0];
        
        NSCalendar *calendar=[[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
        //2: Setting NSDate using NSCalendar.
        NSDate *dob= [calendar dateFromComponents:comps];
        
        //1: Seconds from my DOB to now.
        double secondsTillNow= [currentDate timeIntervalSinceDate:dob];
        
        NSLog(@"Seconds from DOB to now :%lf",secondsTillNow);

    }
    return 0;
}
