/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAAIStartSession : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * acousticIdSessionId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startSessionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)startSession;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)acousticIdSessionId;
-(void)setAcousticIdSessionId:(NSString *)arg1 ;
@end

