/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PTSImageLoaderDelegate;
@class NSString;

@interface PTSImageLoader : NSObject {

	NSString* _path;
	BOOL _loading;
	id<PTSImageLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PTSImageLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoading) BOOL loading;                                            //@synthesize loading=_loading - In the implementation block
-(void)setDelegate:(id<PTSImageLoaderDelegate>)arg1 ;
-(id<PTSImageLoaderDelegate>)delegate;
-(BOOL)isLoading;
-(void)stopLoading;
-(id)initWithPath:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)startLoading;
@end

