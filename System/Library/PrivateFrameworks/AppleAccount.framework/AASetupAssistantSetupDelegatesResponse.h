/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString, NSDictionary;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSDictionary * responseParameters; 
@property (nonatomic,readonly) NSString * dsid; 
-(NSDictionary *)responseParameters;
-(NSNumber *)status;
-(id)responseParametersForServiceIdentifier:(id)arg1 ;
-(NSString *)statusMessage;
-(NSString *)dsid;
@end

