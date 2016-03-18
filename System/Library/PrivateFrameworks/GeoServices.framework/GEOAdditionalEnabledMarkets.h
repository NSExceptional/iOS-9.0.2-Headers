/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	NSMutableArray* _transitMarkets;

}

@property (nonatomic,retain) NSMutableArray * transitMarkets;              //@synthesize transitMarkets=_transitMarkets - In the implementation block
+(id)additionalEnabledMarkets;
+(id)_additionalEnabledTransitMarkets;
-(void)reload;
-(id)queryString;
-(id)queryParameters;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(void)addTransitMarket:(id)arg1 ;
-(unsigned long long)transitMarketsCount;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitMarkets;
-(void)clearTransitMarkets;
-(BOOL)readFrom:(id)arg1 ;
@end

