/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPlaceDataProxy.h>

@protocol GEOPlaceDataProxy;
@class NSString;

@interface GEOPlaceCardRequester : NSObject <GEOPlaceDataProxy> {

	id<GEOPlaceDataProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)useLocalProxy;
+(id)sharedRequester;
+(void)useRemoteProxy;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)cancelRequest:(id)arg1 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 networkActivity:(/*^block*/id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)applyRAPUpdatedMapItems:(id)arg1 ;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 networkActivity:(/*^block*/id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 networkActivity:(/*^block*/id)arg7 requesterHandler:(/*^block*/id)arg8 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)trackPlaceData:(id)arg1 ;
-(void)requestComponentsFromNetwork:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(/*^block*/id)arg5 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
@end

