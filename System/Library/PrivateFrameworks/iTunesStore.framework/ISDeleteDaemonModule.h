/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject {

	CFURLStorageSessionRef _storageSession;
	CFURLCacheRef _urlCache;
	SSAppPurchaseHistoryCache* _purchaseHistoryCache;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(unsigned long long)purgeableSpace;
@end

