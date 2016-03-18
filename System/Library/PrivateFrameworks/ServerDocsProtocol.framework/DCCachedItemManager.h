/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSOperationQueue, NSString, NSURL, DCService;

@interface DCCachedItemManager : NSObject {

	NSMutableDictionary* _items;
	NSOperationQueue* _operationQueue;
	NSString* _purposeIdentifier;
	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	DCService* _service;

}

@property (copy,readonly) NSURL * presentedItemURL;                                      //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;              //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (nonatomic,retain) DCService * service;                                        //@synthesize service=_service - In the implementation block
+(void)removeCachedItemManagerForService:(id)arg1 ;
+(id)cachedItemManagerForService:(id)arg1 ;
+(id)fileResourceTypeAtRelativePath:(id)arg1 ;
+(id)directoryAtRelativePath:(id)arg1 ;
+(id)fileAtRelativePath:(id)arg1 ;
+(id)itemWithDocumentIdentifier:(id)arg1 parent:(id)arg2 ;
+(id)itemAtRelativePath:(id)arg1 ;
+(id)itemsWithDocumentIdentifier:(id)arg1 forService:(id)arg2 ;
+(id)thumbnailForUnderlyingItem:(id)arg1 ;
-(void)setPurposeIdentifier:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(DCService *)service;
-(id)_initWithService:(id)arg1 ;
-(id)root;
-(void)moveItem:(id)arg1 withDocumentIdentifier:(id)arg2 versionIdentifier:(id)arg3 toRelativePath:(id)arg4 ;
-(id)fileForUploadTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2 ;
-(id)parentOfItem:(id)arg1 ;
-(void)coordinateReadingForUploadingItem:(id)arg1 error:(id*)arg2 byAccessor:(/*^block*/id)arg3 ;
-(id)_fileResourceTypeAtRelativePath:(id)arg1 ;
-(id)_itemAtRelativePath:(id)arg1 itemClass:(Class)arg2 itemType:(id)arg3 ;
-(id)_thumbnailForUnderlyingItem:(id)arg1 ;
-(id)_parentFromChildRelativePath:(id)arg1 ;
-(id)_fileCoordinator;
-(void)evictItem:(id)arg1 ;
-(void)setService:(DCService *)arg1 ;
@end

