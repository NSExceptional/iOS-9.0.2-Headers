/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceBatchNearbyTicket.h>

@protocol GEOMapServiceBatchNearbyTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKBatchNearbyTicket : NSObject <MKMapServiceBatchNearbyTicket> {

	id<GEOMapServiceBatchNearbyTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(id)initWithTicket:(id)arg1 ;
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)resultSectionHeaderForCategory:(id)arg1 ;
@end

