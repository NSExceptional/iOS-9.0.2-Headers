/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject {

	BOOL _retrieveCertificates;
	BOOL _retrieveAvailablilty;
	NSArray* _emailAddresses;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,retain) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) BOOL retrieveCertificates;              //@synthesize retrieveCertificates=_retrieveCertificates - In the implementation block
@property (assign,nonatomic) BOOL retrieveAvailablilty;              //@synthesize retrieveAvailablilty=_retrieveAvailablilty - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                       //@synthesize endTime=_endTime - In the implementation block
-(NSArray *)emailAddresses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setRetrieveAvailablilty:(BOOL)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(BOOL)arg2 retrieveAvailability:(BOOL)arg3 withStartTime:(id)arg4 endTime:(id)arg5 ;
-(BOOL)retrieveAvailablilty;
-(BOOL)retrieveCertificates;
-(void)setRetrieveCertificates:(BOOL)arg1 ;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 ;
@end

