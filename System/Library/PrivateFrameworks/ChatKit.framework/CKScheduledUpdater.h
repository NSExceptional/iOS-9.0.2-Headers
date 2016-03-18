/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKManualUpdater.h>

@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater {

	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;              //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(void)dealloc;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)invalidate;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(BOOL)isHoldingUpdates;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
@end

