/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOPDViewportInfo;

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying> {

	double _requestLocalTimestamp;
	unsigned _maxResults;
	NSMutableArray* _suggestionEntryMetadatas;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                    //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                       //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp;                           //@synthesize requestLocalTimestamp=_requestLocalTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadatas;              //@synthesize suggestionEntryMetadatas=_suggestionEntryMetadatas - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDViewportInfo *)viewportInfo;
-(BOOL)hasViewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasMaxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(unsigned)maxResults;
-(double)requestLocalTimestamp;
-(NSMutableArray *)suggestionEntryMetadatas;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setSuggestionEntryMetadatas:(NSMutableArray *)arg1 ;
-(void)clearSuggestionEntryMetadatas;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(unsigned long long)suggestionEntryMetadatasCount;
-(id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1 ;
-(void)addSuggestionEntryMetadata:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

