/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUContinuationDelegate;
@interface SUContinuation : NSObject {

	id<SUContinuationDelegate> _delegate;

}

@property (assign,nonatomic) id<SUContinuationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<SUContinuationDelegate>)arg1 ;
-(id<SUContinuationDelegate>)delegate;
-(void)start;
-(void)sendErrorToDelegate:(id)arg1 ;
-(void)sendFinishToDelegate;
@end
