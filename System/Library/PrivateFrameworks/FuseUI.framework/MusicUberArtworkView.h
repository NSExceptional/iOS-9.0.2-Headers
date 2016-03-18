/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@class NSArray;

@interface MusicUberArtworkView : UIImageView {

	CGRect _focusRect;
	NSArray* _focusRegions;

}

@property (nonatomic,copy) NSArray * focusRegions;              //@synthesize focusRegions=_focusRegions - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setFocusRegions:(NSArray *)arg1 ;
-(NSArray *)focusRegions;
-(void)_musicArtworkViewCommonInitialization;
-(void)_updateFocusRect;
@end

