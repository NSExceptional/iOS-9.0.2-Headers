/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol NPSDomainAccessorFilePresenterDelegate;
@class NSURL, NSOperationQueue, NSString;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _domainURL;
	id<NPSDomainAccessorFilePresenterDelegate> _delegate;
	NSOperationQueue* _presenterOperationQueue;

}

@property (nonatomic,retain) NSURL * domainURL;                                                         //@synthesize domainURL=_domainURL - In the implementation block
@property (nonatomic,__weak,readonly) id<NPSDomainAccessorFilePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * presenterOperationQueue;                                //@synthesize presenterOperationQueue=_presenterOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(BOOL)presentedItemNeedsWatching;
-(void)dealloc;
-(id<NPSDomainAccessorFilePresenterDelegate>)delegate;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)initWithDelegate:(id)arg1 domainURL:(id)arg2 ;
-(id)synchronizeForReadingOnly:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(NSURL *)domainURL;
-(void)setDomainURL:(NSURL *)arg1 ;
-(NSOperationQueue *)presenterOperationQueue;
-(void)setPresenterOperationQueue:(NSOperationQueue *)arg1 ;
@end

