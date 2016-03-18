/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKAddPassesViewControllerDelegate.h>

@protocol SKUIPassbookLoaderDelegate;
@class SKUIClientContext, NSOperationQueue, NSString;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIPassbookLoaderDelegate> _delegate;
	long long _loadCount;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic,__weak) id<SKUIPassbookLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIPassbookLoaderDelegate>)arg1 ;
-(id<SKUIPassbookLoaderDelegate>)delegate;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithClientContext:(id)arg1 ;
-(void)loadPassWithURL:(id)arg1 ;
-(void)_loadPassWithURL:(id)arg1 ;
-(void)_sendDidFinishIfFinished;
-(void)_didLoadWithPass:(id)arg1 error:(id)arg2 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
@end

