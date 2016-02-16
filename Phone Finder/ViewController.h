//
//  ViewController.h
//  Phone Finder
//
//  Created by tom gabsow on 6/13/14.
//  Copyright (c) 2014 GABSOW. All rights reserved.
//

#import <UIKit/UIKit.h>
// 1. Import the gamekit framework
#import <GameKit/GameKit.h>

// 2. Subclass to GKSessionDelegate and GKPeerPickerControllerDelegate
//    GKSessionDelegate - Used to maintain Sessions
//    GKPeerPickerControllerDelegate - Gives a apple provided peer picker,
//            where you can look for other devcies using teh same apps to connect with


@interface ViewController : UIViewController<GKSessionDelegate, GKPeerPickerControllerDelegate>{
	
    // 3. Create these folloeing for
	
	// Session Object
	//GKSession *Session;
	// PeerPicker Object
	GKPeerPickerController *picker;
	// Array of peers connected
	//NSMutableArray *Peers;
}


@property (nonatomic,retain) IBOutlet UILabel *hellowLabele;
- (IBAction)sayHello:(id)sender;
@end
