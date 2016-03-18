/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeechRequest.h>

@class NSString;

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (nonatomic,copy) NSString * structuredDictationType; 
+(id)startStructuredDictationSpeechRequest;
+(id)startStructuredDictationSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)structuredDictationType;
-(void)setStructuredDictationType:(NSString *)arg1 ;
@end
