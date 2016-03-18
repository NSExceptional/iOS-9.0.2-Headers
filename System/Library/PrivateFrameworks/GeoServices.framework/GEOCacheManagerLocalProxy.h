/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOCacheManaging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(long long)invalidationStateForComponent:(id)arg1 ;
-(void)snapshotWithFilePathArray:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)invalidationStateForPlace:(id)arg1 ;
-(void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_syncedPlaceRefineMapItem:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 traits:(id)arg3 ;
-(id)_syncPlaceDataRequest:(id)arg1 ;
-(void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_asyncPlaceDataRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)versionsForDomains:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned)arg3 versionDomains:(id)arg4 ;
-(long long)_invalidationDataHasExpired:(id)arg1 ;
-(BOOL)_invalidationDataHasExpiredByVersion:(unsigned)arg1 domains:(id)arg2 ;
-(BOOL)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_syncedRevGeoCoordinate:(SCD_Struct_GE16)arg1 traits:(id)arg2 ;
@end

