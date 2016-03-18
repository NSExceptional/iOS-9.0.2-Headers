/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegionMapEntry.h>

@protocol _UIFocusRegion;
@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry {

	BOOL _isFocusGuide;
	id<_UIFocusRegion> _focusableRegion;

}

@property (assign,nonatomic,__weak) id<_UIFocusRegion> focusableRegion;              //@synthesize focusableRegion=_focusableRegion - In the implementation block
@property (assign,nonatomic) BOOL isFocusGuide;                                      //@synthesize isFocusGuide=_isFocusGuide - In the implementation block
-(id)description;
-(void)setFocusableRegion:(id<_UIFocusRegion>)arg1 ;
-(void)setIsFocusGuide:(BOOL)arg1 ;
-(id)mapEntrySliceWithFrame:(CGRect)arg1 ;
-(id<_UIFocusRegion>)focusableRegion;
-(BOOL)isFocusGuide;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 isFinal:(BOOL)arg3 ;
-(id)visualRepresentationColor;
@end

