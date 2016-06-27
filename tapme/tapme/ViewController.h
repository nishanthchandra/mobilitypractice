//
//  ViewController.h
//  tapme
//
//  Created by Nishanth on 26/06/16.
//  Copyright © 2016 Nishanth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UIAlertViewDelegate> {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
}
@property (strong, nonatomic) IBOutlet UIView *tapMeButton;
    -(IBAction)buttonPressed;
@end

