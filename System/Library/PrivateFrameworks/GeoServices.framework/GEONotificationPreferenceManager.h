/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {

	NSMutableDictionary* _enableFlags;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setEnabled:(BOOL)arg1 forSubTestWithName:(id)arg2 ;
-(BOOL)isEnabledForSubTestWithName:(id)arg1 ;
@end

