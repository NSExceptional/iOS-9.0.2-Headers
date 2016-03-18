/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSMutableSet;

@interface SBFPasscodeLockAssertionTracker : NSObject {

	MKBAssertionRef _mkbAssertion;
	NSMutableSet* _assertions;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(BOOL)isAssertionValid:(id)arg1 ;
-(id)mkbAssertionOptions;
-(BOOL)hasActiveAssertions;
@end

