/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetContainerList.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _containers;

}

@property (nonatomic,retain) NSOrderedSet * containers;                         //@synthesize containers=_containers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
-(NSOrderedSet *)containers;
-(unsigned long long)containersCount;
-(id)initWithAssetContainer:(id)arg1 ;
-(id)photoLibrary;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)managedObjectContext;
-(id)initWithAssetContainers:(id)arg1 ;
-(void)setContainers:(NSOrderedSet *)arg1 ;
@end

