/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	long long _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                  //@synthesize isHeader=_isHeader - In the implementation block
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)_accessibilityClearChildren;
-(id)accessibilityContainerElements;
-(void)setIsHeader:(BOOL)arg1 ;
-(BOOL)accessibilityScrollToVisible;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_appendTextChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)section;
-(id)accessibilityIdentifier;
-(CGRect)accessibilityFrame;
-(BOOL)isAccessibilityElement;
-(void)setSection:(long long)arg1 ;
-(BOOL)isHeader;
@end

