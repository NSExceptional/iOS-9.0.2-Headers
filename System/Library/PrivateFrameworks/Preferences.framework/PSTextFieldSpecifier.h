/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier {

	SEL bestGuess;
	NSString* _placeholder;

}
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
+(id)specifierWithSpecifier:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(BOOL)isEqualToSpecifier:(id)arg1 ;
@end

