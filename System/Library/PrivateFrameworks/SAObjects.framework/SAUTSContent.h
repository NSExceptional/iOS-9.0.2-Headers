/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUTSContent : SADomainObject

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * channelId; 
@property (nonatomic,copy) NSString * title; 
+(id)content;
+(id)contentWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
@end

