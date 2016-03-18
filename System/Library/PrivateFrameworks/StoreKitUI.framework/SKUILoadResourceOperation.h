/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIResourceRequest* _request;

}

@property (copy,readonly) SKUIResourceRequest * resourceRequest; 
@property (retain) SKUIClientContext * clientContext; 
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)outputBlock;
-(id)initWithResourceRequest:(id)arg1 ;
-(SKUIResourceRequest *)resourceRequest;
-(id)_initSKUILoadResourceOperation;
@end

