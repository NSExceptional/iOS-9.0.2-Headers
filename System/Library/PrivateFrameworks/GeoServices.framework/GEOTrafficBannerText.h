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

@class GEOFormattedString, NSMutableArray;

@interface GEOTrafficBannerText : PBCodable <NSCopying> {

	GEOFormattedString* _bannerLargeText;
	GEOFormattedString* _bannerSmallText;
	unsigned _hideAtDistance;
	unsigned _incidentDistance;
	unsigned _incidentIndex;
	NSMutableArray* _localizedIncidentBanners;
	NSMutableArray* _localizedIncidentSpokenTexts;
	NSMutableArray* _localizedIncidentSubBanners;
	int _previousBannerChange;
	unsigned _showAtDistance;
	GEOFormattedString* _spokenPrompt;
	SCD_Struct_GE93 _has;

}

@property (nonatomic,retain) NSMutableArray * localizedIncidentBanners;                  //@synthesize localizedIncidentBanners=_localizedIncidentBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedIncidentSubBanners;               //@synthesize localizedIncidentSubBanners=_localizedIncidentSubBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedIncidentSpokenTexts;              //@synthesize localizedIncidentSpokenTexts=_localizedIncidentSpokenTexts - In the implementation block
@property (nonatomic,readonly) BOOL hasBannerLargeText; 
@property (nonatomic,retain) GEOFormattedString * bannerLargeText;                       //@synthesize bannerLargeText=_bannerLargeText - In the implementation block
@property (nonatomic,readonly) BOOL hasBannerSmallText; 
@property (nonatomic,retain) GEOFormattedString * bannerSmallText;                       //@synthesize bannerSmallText=_bannerSmallText - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenPrompt; 
@property (nonatomic,retain) GEOFormattedString * spokenPrompt;                          //@synthesize spokenPrompt=_spokenPrompt - In the implementation block
@property (assign,nonatomic) BOOL hasShowAtDistance; 
@property (assign,nonatomic) unsigned showAtDistance;                                    //@synthesize showAtDistance=_showAtDistance - In the implementation block
@property (assign,nonatomic) BOOL hasHideAtDistance; 
@property (assign,nonatomic) unsigned hideAtDistance;                                    //@synthesize hideAtDistance=_hideAtDistance - In the implementation block
@property (assign,nonatomic) BOOL hasIncidentDistance; 
@property (assign,nonatomic) unsigned incidentDistance;                                  //@synthesize incidentDistance=_incidentDistance - In the implementation block
@property (assign,nonatomic) BOOL hasIncidentIndex; 
@property (assign,nonatomic) unsigned incidentIndex;                                     //@synthesize incidentIndex=_incidentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousBannerChange; 
@property (assign,nonatomic) int previousBannerChange;                                   //@synthesize previousBannerChange=_previousBannerChange - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBannerSmallText;
-(void)addLocalizedIncidentSpokenText:(id)arg1 ;
-(void)setLocalizedIncidentBanners:(NSMutableArray *)arg1 ;
-(void)setIncidentIndex:(unsigned)arg1 ;
-(void)clearLocalizedIncidentBanners;
-(unsigned)hideAtDistance;
-(BOOL)hasShowAtDistance;
-(NSMutableArray *)localizedIncidentSpokenTexts;
-(GEOFormattedString *)bannerLargeText;
-(void)addLocalizedIncidentSubBanner:(id)arg1 ;
-(void)setHasPreviousBannerChange:(BOOL)arg1 ;
-(void)setHasHideAtDistance:(BOOL)arg1 ;
-(unsigned)showAtDistance;
-(void)setHasIncidentIndex:(BOOL)arg1 ;
-(void)setLocalizedIncidentSpokenTexts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedIncidentSubBanners;
-(void)setPreviousBannerChange:(int)arg1 ;
-(void)setSpokenPrompt:(GEOFormattedString *)arg1 ;
-(BOOL)hasIncidentDistance;
-(void)setHideAtDistance:(unsigned)arg1 ;
-(BOOL)hasSpokenPrompt;
-(void)setBannerSmallText:(GEOFormattedString *)arg1 ;
-(void)clearLocalizedIncidentSpokenTexts;
-(void)clearLocalizedIncidentSubBanners;
-(unsigned long long)localizedIncidentSubBannersCount;
-(NSMutableArray *)localizedIncidentBanners;
-(id)localizedIncidentBannerAtIndex:(unsigned long long)arg1 ;
-(int)previousBannerChange;
-(unsigned long long)localizedIncidentBannersCount;
-(void)addLocalizedIncidentBanner:(id)arg1 ;
-(BOOL)hasHideAtDistance;
-(unsigned)incidentIndex;
-(GEOFormattedString *)spokenPrompt;
-(void)setShowAtDistance:(unsigned)arg1 ;
-(void)setHasIncidentDistance:(BOOL)arg1 ;
-(unsigned)incidentDistance;
-(BOOL)hasBannerLargeText;
-(id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1 ;
-(void)setLocalizedIncidentSubBanners:(NSMutableArray *)arg1 ;
-(void)setHasShowAtDistance:(BOOL)arg1 ;
-(BOOL)hasPreviousBannerChange;
-(void)setBannerLargeText:(GEOFormattedString *)arg1 ;
-(BOOL)hasIncidentIndex;
-(void)setIncidentDistance:(unsigned)arg1 ;
-(GEOFormattedString *)bannerSmallText;
-(id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedIncidentSpokenTextsCount;
-(BOOL)readFrom:(id)arg1 ;
@end
