//
//  main.c
//  CountDown
//
//  Created by Nishanth on 26/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#include <stdio.h>

void countdown(int n){
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
    countdown(10);
    return 0;
}
