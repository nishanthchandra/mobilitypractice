//
//  ViewController.m
//  tapme
//
//  Created by Nishanth on 26/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self setGame];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)buttonPressed {
    count++;
    scoreLabel.text = [NSString stringWithFormat:@"Score:%li",(long)count];
}

- (void)setGame {
    seconds = 30;
    count = 0;
    
    timerLabel.text = [NSString stringWithFormat:@"Time: %li",(long)seconds];
    scoreLabel.text = [NSString stringWithFormat:@"Score:%li",(long)count];
    
    timer = [NSTimer scheduledTimerWithTimeInterval:1.0f target:self selector:@selector(subtractTime) userInfo:nil repeats:YES];
}

- (void)subtractTime {
    seconds--;
    timerLabel.text = [NSString stringWithFormat:@"Time: %li",(long)seconds];
    
    if(seconds == 0){
        [timer invalidate];
        
//        UIAlertController *alert = [[UIAlertController alloc] preferredStyle:UIAlertControllerStyleAlert];
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Time is Up!" message:[NSString stringWithFormat:@"You scored %li points",(long)count] delegate:self cancelButtonTitle:@"Play Again" otherButtonTitles:nil];
        
        [alert show];
    }
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    [self setGame];
}

@end
