/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOLogAdaptorFactory : NSObject {

	NSMutableDictionary* _logAdaptors;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_createLogAdaptorWithOptions:(id)arg1 ;
-(id)logAdaptorWithOptions:(id)arg1 ;
@end

