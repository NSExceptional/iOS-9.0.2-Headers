/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUILibraryInterface.h>

@class NSString;

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stateForLibraryItem:(id)arg1 ;
-(BOOL)performActionForLibraryItem:(id)arg1 ;
-(id)exposedPlatformItemKinds;
-(void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newDefaultQuery;
-(long long)_availabilityForMediaItem:(id)arg1 ;
-(unsigned long long)_AVTypesForMediaItem:(id)arg1 ;
-(id)_storePlatformKindForMediaItem:(id)arg1 ;
-(void)_restrictQueryToLocalContent:(id)arg1 ;
@end

