/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal {

	BOOL _caseSensitive;
	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
-(BOOL)caseSensitive;
-(unsigned long long)_minimumLength;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(id)_label;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(id)characterSet;
@end

