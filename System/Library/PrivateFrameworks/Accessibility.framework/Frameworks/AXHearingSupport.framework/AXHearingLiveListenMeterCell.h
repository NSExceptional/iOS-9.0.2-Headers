/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSArray, NSString;

@interface AXHearingLiveListenMeterCell : PSTableCell {

	NSArray* dotImageViews;
	NSString* _liveListenUpdateUUID;

}

@property (nonatomic,retain) NSArray * dotImageViews; 
@property (nonatomic,retain) NSString * liveListenUpdateUUID;              //@synthesize liveListenUpdateUUID=_liveListenUpdateUUID - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDotImageViews:(NSArray *)arg1 ;
-(NSArray *)dotImageViews;
-(void)audioLevelDidChange:(float)arg1 ;
-(void)setMeterLevel:(int)arg1 ;
-(NSString *)liveListenUpdateUUID;
-(void)setLiveListenUpdateUUID:(NSString *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
@end

