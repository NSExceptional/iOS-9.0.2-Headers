/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SAUIAppPunchOut * offerPunchOut; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)offer;
+(id)offerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)offerPunchOut;
-(void)setOfferPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

