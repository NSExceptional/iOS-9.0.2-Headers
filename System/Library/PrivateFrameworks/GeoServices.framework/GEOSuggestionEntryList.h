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

@class NSString, NSMutableArray;

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {

	NSString* _localizedSectionHeader;
	NSMutableArray* _suggestionEntries;

}

@property (nonatomic,retain) NSMutableArray * suggestionEntries;              //@synthesize suggestionEntries=_suggestionEntries - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedSectionHeader; 
@property (nonatomic,retain) NSString * localizedSectionHeader;               //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)localizedSectionHeader;
-(NSMutableArray *)suggestionEntries;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(void)addSuggestionEntries:(id)arg1 ;
-(void)setSuggestionEntries:(NSMutableArray *)arg1 ;
-(unsigned long long)suggestionEntriesCount;
-(id)suggestionEntriesAtIndex:(unsigned long long)arg1 ;
-(void)clearSuggestionEntries;
-(BOOL)hasLocalizedSectionHeader;
-(BOOL)readFrom:(id)arg1 ;
@end

