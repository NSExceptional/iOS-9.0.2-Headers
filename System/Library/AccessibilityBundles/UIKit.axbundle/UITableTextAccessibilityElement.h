/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath;

@interface UITableTextAccessibilityElement : UIAccessibilityElement {

	id _attributeDelegate;
	SEL _selector;
	NSIndexPath* fallbackIndexPath;
	id textDelegate;

}

@property (nonatomic,retain) NSIndexPath * fallbackIndexPath; 
@property (assign,nonatomic) id textDelegate; 
-(BOOL)_accessibilityIsScannerElement;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityIndexPath;
-(void)setTextDelegate:(id)arg1 ;
-(void)setAttributeDelegate:(id)arg1 ;
-(void)setFallbackIndexPath:(NSIndexPath *)arg1 ;
-(id)_accessibilityCustomActions;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(long long)arg1 ;
-(BOOL)_accessibilityIsAwayAlertElement;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilityTextViewTextOperationResponder;
-(int)_accessibilityScannerActivateBehavior;
-(id)_accessibilitySpeakThisString;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(id)textDelegate;
-(id)_tableViewCellTextDelegate;
-(id)_tableViewCellAttributeDelegate;
-(double)_accessibilityDelayBeforeUpdatingOnActivation;
-(NSIndexPath *)fallbackIndexPath;
-(id)attributeDelegate;
-(void)dealloc;
-(id)description;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityActivate;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end

