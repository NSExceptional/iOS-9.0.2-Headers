/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEORequestThrottler : NSObject {

	NSMapTable* _throttleMap;
	NSLock* _lock;

}
+(id)sharedThrottler;
-(void)dealloc;
-(id)init;
-(BOOL)allowRequestForKey:(id)arg1 ;
@end

