/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CNCache : NSObject {

	NSMutableDictionary* _cache;

}
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)objectForKey:(id)arg1 onCacheMiss:(/*^block*/id)arg2 ;
@end
