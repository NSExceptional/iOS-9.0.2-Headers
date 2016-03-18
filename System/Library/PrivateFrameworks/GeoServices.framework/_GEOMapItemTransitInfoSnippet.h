/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemTransitInfo.h>

@class GEOPDTransitInfoSnippet, NSArray, NSString, NSDate;

@interface _GEOMapItemTransitInfoSnippet : NSObject <GEOMapItemTransitInfo> {

	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	NSArray* _labelItems;
	NSString* _displayName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * departureSequences; 
@property (nonatomic,readonly) NSDate * lastFullScheduleValidDate; 
@property (nonatomic,readonly) unsigned long long numAdditionalDepartures; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned long long systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned long long linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasTransitIncidentComponent; 
@property (nonatomic,readonly) NSString * displayName; 
-(void)dealloc;
-(NSString *)displayName;
-(NSArray *)departureSequences;
-(id)initWithTransitInfoSnippet:(id)arg1 ;
-(BOOL)hasTransitIncidentComponent;
-(NSArray *)incidents;
-(BOOL)isTransitIncidentsTTLExpired;
-(unsigned long long)numAdditionalDepartures;
-(NSDate *)lastFullScheduleValidDate;
-(id)sequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)directionsForSystem:(id)arg1 excludingLines:(id)arg2 validForDateFromBlock:(/*^block*/id)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4 ;
-(unsigned long long)linesCount;
-(id)departureSequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(unsigned long long)systemsCount;
-(NSArray *)connections;
-(NSArray *)labelItems;
-(NSArray *)systems;
-(NSArray *)lines;
@end

