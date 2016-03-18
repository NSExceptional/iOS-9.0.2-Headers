/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3LanguageResources, NSObject;

@interface ML3LanguageResourceManager : NSObject {

	ML3LanguageResources* _cachedResources;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedResourceManager;
-(id)init;
-(void)invalidateCachedResources;
-(void)fetchLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)_buildLanguageResources;
-(void)_fetchLanguageResourcesFromMediaLibraryService:(/*^block*/id)arg1 ;
@end

