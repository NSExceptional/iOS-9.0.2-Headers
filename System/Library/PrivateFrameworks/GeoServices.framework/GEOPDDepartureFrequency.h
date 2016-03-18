/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDepartureFrequency.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {

	unsigned _displayDepartureFrequency;
	unsigned _earliestDepartureTime;
	unsigned _latestDepartureTime;
	unsigned _maxDepartureFrequency;
	unsigned _minDepartureFrequency;
	BOOL _isEstimated;
	SCD_Struct_GE60 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * firstTimeInFrequency; 
@property (nonatomic,readonly) NSDate * lastTimeInFrequency; 
@property (nonatomic,readonly) double frequencyForSorting; 
@property (nonatomic,readonly) long long frequencyType; 
@property (nonatomic,readonly) BOOL isEstimate; 
@property (nonatomic,readonly) long long displayFrequency; 
@property (nonatomic,readonly) long long minFrequency; 
@property (nonatomic,readonly) long long maxFrequency; 
@property (assign,nonatomic) BOOL hasMinDepartureFrequency; 
@property (assign,nonatomic) unsigned minDepartureFrequency;                  //@synthesize minDepartureFrequency=_minDepartureFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDepartureFrequency; 
@property (assign,nonatomic) unsigned maxDepartureFrequency;                  //@synthesize maxDepartureFrequency=_maxDepartureFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasEarliestDepartureTime; 
@property (assign,nonatomic) unsigned earliestDepartureTime;                  //@synthesize earliestDepartureTime=_earliestDepartureTime - In the implementation block
@property (assign,nonatomic) BOOL hasLatestDepartureTime; 
@property (assign,nonatomic) unsigned latestDepartureTime;                    //@synthesize latestDepartureTime=_latestDepartureTime - In the implementation block
@property (assign,nonatomic) BOOL hasIsEstimated; 
@property (assign,nonatomic) BOOL isEstimated;                                //@synthesize isEstimated=_isEstimated - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayDepartureFrequency; 
@property (assign,nonatomic) unsigned displayDepartureFrequency;              //@synthesize displayDepartureFrequency=_displayDepartureFrequency - In the implementation block
-(BOOL)isEstimate;
-(double)frequencyForSorting;
-(long long)displayFrequency;
-(BOOL)isValidAtDate:(id)arg1 ;
-(long long)maxFrequency;
-(NSDate *)lastTimeInFrequency;
-(NSDate *)firstTimeInFrequency;
-(long long)frequencyType;
-(long long)minFrequency;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayDepartureFrequency:(unsigned)arg1 ;
-(void)setLatestDepartureTime:(unsigned)arg1 ;
-(void)setMaxDepartureFrequency:(unsigned)arg1 ;
-(BOOL)hasEarliestDepartureTime;
-(BOOL)hasIsEstimated;
-(unsigned)maxDepartureFrequency;
-(void)setMinDepartureFrequency:(unsigned)arg1 ;
-(BOOL)hasMinDepartureFrequency;
-(void)setHasEarliestDepartureTime:(BOOL)arg1 ;
-(void)setHasIsEstimated:(BOOL)arg1 ;
-(unsigned)earliestDepartureTime;
-(void)setIsEstimated:(BOOL)arg1 ;
-(BOOL)hasDisplayDepartureFrequency;
-(unsigned)latestDepartureTime;
-(void)setEarliestDepartureTime:(unsigned)arg1 ;
-(BOOL)hasLatestDepartureTime;
-(BOOL)hasMaxDepartureFrequency;
-(BOOL)isEstimated;
-(void)setHasMinDepartureFrequency:(BOOL)arg1 ;
-(void)setHasDisplayDepartureFrequency:(BOOL)arg1 ;
-(void)setHasLatestDepartureTime:(BOOL)arg1 ;
-(unsigned)displayDepartureFrequency;
-(unsigned)minDepartureFrequency;
-(void)setHasMaxDepartureFrequency:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

