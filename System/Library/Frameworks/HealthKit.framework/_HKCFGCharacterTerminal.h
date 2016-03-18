/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSCharacterSet;

@interface _HKCFGCharacterTerminal : _HKCFGTerminal {

	NSCharacterSet* _characterSet;

}

@property (nonatomic,copy) NSCharacterSet * characterSet;              //@synthesize characterSet=_characterSet - In the implementation block
-(unsigned long long)_minimumLength;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(id)_label;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)characterSet;
@end

