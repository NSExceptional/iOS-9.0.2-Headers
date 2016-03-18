/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement {

	NSArray* _representedElements;

}

@property (nonatomic,retain) NSArray * representedElements;              //@synthesize representedElements=_representedElements - In the implementation block
-(id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)setRepresentedElements:(NSArray *)arg1 ;
-(NSArray *)representedElements;
-(void)addRepresentedObject:(id)arg1 ;
@end

