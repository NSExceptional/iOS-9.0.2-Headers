/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EKPersistentChangeStoreInfo : NSObject {

	int _minConsumedSequenceNumber;
	int _secondMinConsumedSequenceNumber;
	NSString* _minConsumedClientIdentifier;

}

@property (assign,nonatomic) int minConsumedSequenceNumber;                       //@synthesize minConsumedSequenceNumber=_minConsumedSequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * minConsumedClientIdentifier;              //@synthesize minConsumedClientIdentifier=_minConsumedClientIdentifier - In the implementation block
@property (assign,nonatomic) int secondMinConsumedSequenceNumber;                 //@synthesize secondMinConsumedSequenceNumber=_secondMinConsumedSequenceNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)minConsumedClientIdentifier;
-(int)minConsumedSequenceNumber;
-(int)secondMinConsumedSequenceNumber;
-(void)setMinConsumedSequenceNumber:(int)arg1 ;
-(void)setMinConsumedClientIdentifier:(NSString *)arg1 ;
-(void)setSecondMinConsumedSequenceNumber:(int)arg1 ;
@end

