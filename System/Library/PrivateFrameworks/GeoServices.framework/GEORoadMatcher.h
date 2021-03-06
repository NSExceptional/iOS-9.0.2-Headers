/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@class GEOMapAccess, NSString;

@interface GEORoadMatcher : NSObject <GEOMapAccessRestrictions> {

	GEOMapAccess* _map;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
-(void)dealloc;
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
-(id)_tilesAround:(SCD_Struct_GE16)arg1 radius:(double)arg2 ;
-(id)_bestSegmentForTile:(id)arg1 location:(id)arg2 transportType:(int)arg3 ;
@end

