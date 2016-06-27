//
//  main.c
//  countDownWithUserInput
//
//  Created by Nishanth on 27/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#include <stdio.h>

void count_down(int n){
    int i;
    for(i = n-1; i >= 0; i--){
        if(i%5 == 0){
            printf("%d\nFound One!\n",i);
        }else{
            printf("%d\n",i);
        }
    }
}

int main(int argc, const char * argv[]) {
    
    printf("Enter the countdown number:\n");
    int countdown;
    scanf("%i",&countdown);
    
    printf("Given number is %i\n",countdown);
    
    count_down(countdown);
    return 0;
}
