/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPrefsSource : NSObject {

	CFDictionaryRef _dict;
	unsigned _generationCount : 63;
	unsigned _isSearchList : 1;
	/*function pointer*/void** shmemEntry;
	opaque_pthread_mutex_t* _lock;
	SCD_Union_CF28 lastKnownShmemState;

}
+(void)withSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 container:(CFStringRef)arg4 perform:(/*^block*/id)arg5 ;
+(void)withNamedVolatileSourceForIdentifier:(CFStringRef)arg1 perform:(/*^block*/id)arg2 ;
-(CFStringRef)userIdentifier;
-(BOOL)managed;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)alreadylocked_clearCache;
-(id)createRequestNewContentMessageForDaemon:(BOOL)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(BOOL)isByHost;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)alreadylocked_requestNewData;
-(long long)alreadylocked_generationCount;
-(void)alreadylocked_setValues:(const void*)arg1 forKeys:(const void*)arg2 count:(long long)arg3 ;
-(void)alreadylocked_removeAllValues;
-(void)setValues:(const void*)arg1 forKeys:(const void*)arg2 count:(long long)arg3 ;
-(CFDictionaryRef)copyDictionary;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)synchronize;
-(CFStringRef)container;
-(void)lock;
-(void)unlock;
-(long long)generationCount;
-(CFArrayRef)copyKeyList;
-(CFStringRef)domainIdentifier;
-(void)finalize;
-(void)removeAllValues;
@end

