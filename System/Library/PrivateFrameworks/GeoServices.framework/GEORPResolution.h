/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion, NSString, NSMutableArray;

@interface GEORPResolution : PBCodable <NSCopying> {

	double _resolutionDate;
	unsigned long long _transitLineMuid;
	GEOMapRegion* _displayRegion;
	int _displayStyle;
	NSString* _localizedAlertText;
	NSMutableArray* _localizedChangeLists;
	NSString* _localizedDescription;
	NSMutableArray* _updatedPlaces;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasResolutionDate; 
@property (assign,nonatomic) double resolutionDate;                              //@synthesize resolutionDate=_resolutionDate - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion;                       //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedChangeLists;              //@synthesize localizedChangeLists=_localizedChangeLists - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedPlaces;                     //@synthesize updatedPlaces=_updatedPlaces - In the implementation block
@property (assign,nonatomic) BOOL hasTransitLineMuid; 
@property (assign,nonatomic) unsigned long long transitLineMuid;                 //@synthesize transitLineMuid=_transitLineMuid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;                    //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedAlertText; 
@property (nonatomic,retain) NSString * localizedAlertText;                      //@synthesize localizedAlertText=_localizedAlertText - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle;                                   //@synthesize displayStyle=_displayStyle - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayRegion;
-(GEOMapRegion *)displayRegion;
-(BOOL)hasTransitLineMuid;
-(unsigned long long)transitLineMuid;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(BOOL)hasDisplayStyle;
-(int)displayStyle;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
-(BOOL)hasLocalizedDescription;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(unsigned long long)localizedChangeListsCount;
-(NSString *)localizedAlertText;
-(void)setUpdatedPlaces:(NSMutableArray *)arg1 ;
-(void)addLocalizedChangeList:(id)arg1 ;
-(void)clearLocalizedChangeLists;
-(BOOL)hasResolutionDate;
-(void)clearUpdatedPlaces;
-(NSMutableArray *)updatedPlaces;
-(NSMutableArray *)localizedChangeLists;
-(void)addUpdatedPlace:(id)arg1 ;
-(void)setHasResolutionDate:(BOOL)arg1 ;
-(BOOL)hasLocalizedAlertText;
-(double)resolutionDate;
-(void)setLocalizedChangeLists:(NSMutableArray *)arg1 ;
-(id)updatedPlaceAtIndex:(unsigned long long)arg1 ;
-(void)setLocalizedAlertText:(NSString *)arg1 ;
-(id)localizedChangeListAtIndex:(unsigned long long)arg1 ;
-(void)setResolutionDate:(double)arg1 ;
-(unsigned long long)updatedPlacesCount;
-(BOOL)readFrom:(id)arg1 ;
@end

