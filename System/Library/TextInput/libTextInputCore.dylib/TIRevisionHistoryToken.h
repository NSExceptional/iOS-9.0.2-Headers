/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TIRevisionHistoryToken : NSObject {

	BOOL _accepted;
	unsigned _tokenID;
	unsigned _usageLearningMask;
	unsigned _usageTrackingMask;
	NSString* _tokenString;
	unsigned long long _offset;
	NSString* _userTyping;

}

@property (nonatomic,copy) NSString * tokenString;                         //@synthesize tokenString=_tokenString - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned tokenID;                             //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,copy) NSString * userTyping;                          //@synthesize userTyping=_userTyping - In the implementation block
@property (assign,nonatomic) unsigned usageLearningMask;                   //@synthesize usageLearningMask=_usageLearningMask - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                   //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
@property (assign,getter=isAccepted,nonatomic) BOOL accepted;              //@synthesize accepted=_accepted - In the implementation block
-(unsigned)tokenID;
-(void)dealloc;
-(id)description;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(unsigned)usageTrackingMask;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(BOOL)isAccepted;
-(void)setUsageLearningMask:(unsigned)arg1 ;
-(void)setTokenID:(unsigned)arg1 ;
-(NSString *)userTyping;
-(void)setTokenString:(NSString *)arg1 ;
-(NSString *)tokenString;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setUserTyping:(NSString *)arg1 ;
-(unsigned)usageLearningMask;
@end

