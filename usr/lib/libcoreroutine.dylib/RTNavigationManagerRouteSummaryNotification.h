/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTNavigationManagerRouteSummaryNotification : RTNotification {

	double _originLatitude;
	double _originLongitude;
	NSString* _destinationName;
	double _destinationLatitude;
	double _destinationLongitude;

}

@property (assign,nonatomic) double originLatitude;                    //@synthesize originLatitude=_originLatitude - In the implementation block
@property (assign,nonatomic) double originLongitude;                   //@synthesize originLongitude=_originLongitude - In the implementation block
@property (nonatomic,retain) NSString * destinationName;               //@synthesize destinationName=_destinationName - In the implementation block
@property (assign,nonatomic) double destinationLatitude;               //@synthesize destinationLatitude=_destinationLatitude - In the implementation block
@property (assign,nonatomic) double destinationLongitude;              //@synthesize destinationLongitude=_destinationLongitude - In the implementation block
+(id)notificationName;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(double)destinationLatitude;
-(double)destinationLongitude;
-(id)initWithRouteSummary:(id)arg1 ;
-(double)originLatitude;
-(void)setOriginLatitude:(double)arg1 ;
-(double)originLongitude;
-(void)setOriginLongitude:(double)arg1 ;
-(void)setDestinationLatitude:(double)arg1 ;
-(void)setDestinationLongitude:(double)arg1 ;
@end

