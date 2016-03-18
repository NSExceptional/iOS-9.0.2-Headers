/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBBulletin;

@interface BBObserverBulletinUpdate : NSObject <NSSecureCoding> {

	BBBulletin* _bulletin;
	unsigned long long _transactionID;
	long long _updateType;

}

@property (nonatomic,retain,readonly) BBBulletin * bulletin;                  //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) long long updateType;                          //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3 ;
-(BBBulletin *)bulletin;
-(unsigned long long)transactionID;
-(long long)updateType;
@end

