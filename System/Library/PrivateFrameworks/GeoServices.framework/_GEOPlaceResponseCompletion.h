/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCompletion.h>

@class NSArray, GEOPlaceSearchResponse, NSString;

@interface _GEOPlaceResponseCompletion : NSObject <GEOCompletion> {

	GEOPlaceSearchResponse* _response;
	NSArray* _groups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groups; 
-(void)dealloc;
-(NSString *)description;
-(id)response;
-(NSArray *)groups;
-(id)initWithPlaceSearchResponse:(id)arg1 query:(id)arg2 traits:(id)arg3 ;
-(id)metadata;
@end

