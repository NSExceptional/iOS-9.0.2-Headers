/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitDepartureSequence.h>

@protocol GEOTransitLine;
@class NSString, NSArray, GEOPDDepartureSequence;

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {

	GEOPDDepartureSequence* _sequence;
	id<GEOTransitLine> _line;

}

@property (nonatomic,readonly) NSArray * departures; 
@property (nonatomic,readonly) NSArray * frequencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) BOOL isLowFrequency; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
-(void)dealloc;
-(NSString *)direction;
-(id<GEOTransitLine>)line;
-(NSArray *)operatingHours;
-(NSArray *)departures;
-(NSString *)headsign;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(double)frequencyForSortingAtDate:(id)arg1 ;
-(id)departuresValidForDate:(id)arg1 ;
-(id)firstDepartureValidForDate:(id)arg1 ;
-(id)frequencyToDescribeAtDate:(id)arg1 ;
-(BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2 ;
-(void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasFrequencyAtDate:(id)arg1 ;
-(id)firstDepartureAfterDate:(id)arg1 ;
-(NSArray *)frequencies;
-(id)firstDepartureOnOrAfterDate:(id)arg1 ;
-(BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1 ;
-(BOOL)isLowFrequency;
-(id)initWithSequence:(id)arg1 line:(id)arg2 ;
@end

