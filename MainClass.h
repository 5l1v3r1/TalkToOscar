//
//  MainClass.h
//  TalkToOscar
//
//  Created by Alex Nichol on 3/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIMSession.h"
#import "AIMSessionMessageSender.h"
#import "AIMSessionHandler.h"
#import "AOLRTF.h"

@interface MainClass : NSObject <AIMSessionDelegate, AIMSessionHandlerDelegate> {
	AIMSession * session;
	AIMSessionMessageSender * messageSender;
	AIMSessionHandler * sessionEvents;
}

- (void)main;

@end