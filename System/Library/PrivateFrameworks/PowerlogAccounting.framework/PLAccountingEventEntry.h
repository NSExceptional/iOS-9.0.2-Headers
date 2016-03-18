/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class PLAccountingRange;

@interface PLAccountingEventEntry : PLEntry {

	PLAccountingRange* _range;

}

@property (nonatomic,readonly) int instanceDirectionality; 
@property (nonatomic,retain) PLAccountingRange * range;                 //@synthesize range=_range - In the implementation block
+(int)classDirectionality;
-(PLAccountingRange *)range;
-(void)setRange:(PLAccountingRange *)arg1 ;
-(id)initWithRange:(id)arg1 ;
-(int)instanceDirectionality;
-(BOOL)isEqualContentsWithEvent:(id)arg1 ;
-(BOOL)isEmptyEvent;
-(id)rangeSinceEvent:(id)arg1 ;
-(void)mergeWithEvent:(id)arg1 ;
-(BOOL)canMerge;
@end

