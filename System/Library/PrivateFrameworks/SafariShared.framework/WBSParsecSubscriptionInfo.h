/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface WBSParsecSubscriptionInfo : NSObject {

	NSDate* _expirationDate;
	NSString* _type;

}

@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(NSString *)type;
-(id)initWithString:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
@end

