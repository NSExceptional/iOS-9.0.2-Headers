/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString;

@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,copy) NSString * results; 
+(id)providerCompleted;
+(id)providerCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)results;
-(void)setResults:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

