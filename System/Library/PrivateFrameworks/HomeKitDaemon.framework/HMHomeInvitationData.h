/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMHomeInvitationData : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _invitationState;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long invitationState;               //@synthesize invitationState=_invitationState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeInvitationStateDescription:(long long)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)invitationState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3 ;
-(void)setInvitationState:(long long)arg1 ;
@end

