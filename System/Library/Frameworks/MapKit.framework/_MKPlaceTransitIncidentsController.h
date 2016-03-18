/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKMapItem, NSArray, NSSet, NSMutableDictionary, NSDate;

@interface _MKPlaceTransitIncidentsController : NSObject {

	MKMapItem* _mapItem;
	NSArray* _validIncidents;
	NSSet* _blockedLines;
	NSMutableDictionary* _dominantIncidentForLine;
	NSDate* _nextIncidentChangeDate;

}
-(id)blockedLinesAtDate:(id)arg1 ;
-(id)dominantIncidentForLine:(id)arg1 atDate:(id)arg2 ;
-(void)_validateCacheForDate:(id)arg1 ;
-(id)_validIncidentsAtDate:(id)arg1 ;
-(void)resetCache;
-(id)validIncidentsAtDate:(id)arg1 ;
-(id)_blockedLinesAtDate:(id)arg1 ;
-(id)_dominantIncidentForLine:(id)arg1 atDate:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 ;
@end
