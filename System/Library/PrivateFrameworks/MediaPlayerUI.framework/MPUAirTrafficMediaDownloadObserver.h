/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSString;

@interface MPUAirTrafficMediaDownloadObserver : MPUMediaDownloadObserver {

	NSString* _assetIdentifier;
	double _lastDownloadProgress;

}
+(void)initialize;
+(void)registerObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)unregisterObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(BOOL)isPurchasing;
-(void)dealloc;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(void)_onQueue_invalidate;
-(double)downloadProgress;
@end

