/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)commandFailed;
+(id)commandFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandFailedWithErrorCode:(long long)arg1 ;
+(id)commandFailedWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithErrorCode:(long long)arg1 ;
-(id)initWithReason:(id)arg1 ;
@end

