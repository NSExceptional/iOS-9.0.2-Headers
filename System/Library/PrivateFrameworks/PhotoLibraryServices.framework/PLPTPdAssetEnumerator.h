/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class PLManagedObjectContext, NSArray;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration> {

	PLManagedObjectContext* _managedObjectContext;
	NSArray* _assetObjectIDs;
	NSArray* _albumObjectIDs;
	NSArray* _resultStore;

}
+(id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3 ;
-(unsigned long long)getPTPdInfo:(id*)arg1 count:(unsigned long long)arg2 fetchOffset:(unsigned long long)arg3 ;
-(id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
@end

