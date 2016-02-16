//
//  ViewController.m
//  Phone Finder
//
//  Created by tom gabsow on 6/13/14.
//  Copyright (c) 2014 GABSOW. All rights reserved.
//

#import "ViewController.h"
@interface ViewController ()

@end

@implementation ViewController
@synthesize hellowLabele;

- (IBAction)sayHello:(id)sender{
    hellowLabele.text = @"hello to gabsow";
}
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    // setup bluetooth interface
    //btManager = [BluetoothManager sharedInstance];
    
    NSLog(@"view did log");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(IBAction) btnConnect:(id) sender {
    picker = [[GKPeerPickerController alloc] init];
    picker.delegate = self;
    picker.connectionTypesMask = GKPeerPickerConnectionTypeNearby;
    [picker show];
}

@end
