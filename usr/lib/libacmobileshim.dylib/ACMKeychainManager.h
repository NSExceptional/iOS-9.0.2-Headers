/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACMKeychainManager : NSObject
+(id)sharedInstance;
-(id)universalAccessGroup;
-(id)obtainAccessGroup;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
-(void)dumpResults:(id)arg1 ;
-(id)sharedAccessGroup;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3 ;
-(BOOL)removeItemWithInfo:(id)arg1 ;
@end

