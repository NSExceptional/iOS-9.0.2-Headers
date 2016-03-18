/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * appBundleId; 
@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * generation; 
@property (nonatomic,copy) NSString * intentSlotName; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * validity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)anchor;
+(id)anchorWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
-(long long)count;
-(NSString *)key;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)generation;
-(id)encodedClassName;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(void)setGeneration:(NSString *)arg1 ;
@end

