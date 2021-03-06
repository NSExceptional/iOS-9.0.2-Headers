/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeTextView.h>

@interface CMKHardwareLockIndicatorView : CMKBadgeTextView {

	BOOL _focusLocked;
	BOOL _exposureLocked;

}

@property (assign,getter=isFocusLocked,nonatomic) BOOL focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) BOOL exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_text;
-(id)_textAttributes;
-(void)_commonCMKHardwareLockIndicatorViewInitialization;
-(void)_updateFromHardwareChange;
-(void)setFocusLocked:(BOOL)arg1 ;
-(void)setExposureLocked:(BOOL)arg1 ;
-(double)_cornerRadius;
-(UIEdgeInsets)_textInsets;
-(BOOL)isFocusLocked;
-(BOOL)isExposureLocked;
@end

