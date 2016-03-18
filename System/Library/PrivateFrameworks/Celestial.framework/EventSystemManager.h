/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray;

@interface EventSystemManager : NSObject {

	IOHIDEventSystemClientRef eventSystemClient;
	NSMutableArray* clientList;
	CFRunLoopRef runLoop;
	BOOL manageAccel;
	int accelEventIndex;
	int accelUpdateInternalUS;

}
+(id)sharedEventSystem;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(BOOL)managingAccel;
-(void)setAccelUpdateInterval:(double)arg1 ;
-(void)updateClientState;
-(void)refreshEventSystem;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(id)clientList;
@end
