/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView {

	NSMutableString* _passcodeMutableString;

}

@property (readonly) NSString * passcodeString; 
@property (retain) NSMutableString * passcodeMutableString;              //@synthesize passcodeMutableString=_passcodeMutableString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)deleteLastCharacter;
-(void)clear;
-(NSString *)passcodeString;
-(void)appendCharacter:(id)arg1 ;
-(void)setPasscodeMutableString:(NSMutableString *)arg1 ;
-(NSMutableString *)passcodeMutableString;
@end

