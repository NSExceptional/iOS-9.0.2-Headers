/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying> {

	double _timestampFirstSeen;
	GEOPDAttribution* _attribution;
	int _cacheControl;
	GEOPDSource* _source;
	int _startIndex;
	int _status;
	unsigned _ttl;
	int _type;
	NSMutableArray* _values;
	int _valuesAvailable;
	unsigned _version;
	NSMutableArray* _versionDomains;
	SCD_Struct_GE65 _has;

}

@property (assign,nonatomic) BOOL hasTimestampFirstSeen; 
@property (assign,nonatomic) double timestampFirstSeen; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl;                                 //@synthesize ttl=_ttl - In the implementation block
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) int startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL hasValuesAvailable; 
@property (assign,nonatomic) int valuesAvailable;                          //@synthesize valuesAvailable=_valuesAvailable - In the implementation block
@property (nonatomic,readonly) BOOL hasAttribution; 
@property (nonatomic,retain) GEOPDAttribution * attribution;               //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) GEOPDSource * source;                         //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasCacheControl; 
@property (assign,nonatomic) int cacheControl;                             //@synthesize cacheControl=_cacheControl - In the implementation block
-(BOOL)hasTimestampFirstSeen;
-(void)setHasTimestampFirstSeen:(BOOL)arg1 ;
-(void)setTimestampFirstSeen:(double)arg1 ;
-(double)timestampFirstSeen;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setStartIndex:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(id)dictionaryRepresentation;
-(GEOPDSource *)source;
-(void)setSource:(GEOPDSource *)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)addValue:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setCacheControl:(int)arg1 ;
-(int)cacheControl;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(BOOL)hasCacheControl;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)clearVersionDomains;
-(NSMutableArray *)versionDomains;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(BOOL)hasAttribution;
-(GEOPDAttribution *)attribution;
-(int)valuesAvailable;
-(BOOL)hasValuesAvailable;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(BOOL)hasTtl;
-(void)clearValues;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(void)setHasValuesAvailable:(BOOL)arg1 ;
-(unsigned long long)valuesCount;
-(BOOL)hasStartIndex;
-(unsigned)ttl;
-(void)setValuesAvailable:(int)arg1 ;
-(BOOL)hasSource;
-(int)startIndex;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
@end

