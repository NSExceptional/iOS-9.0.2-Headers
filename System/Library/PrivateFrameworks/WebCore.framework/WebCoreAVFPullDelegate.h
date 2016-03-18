/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {

	MediaPlayerPrivateAVFoundationObjC* m_callback;
	NSObject*<OS_dispatch_semaphore> m_semaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)outputMediaDataWillChange:(id)arg1 ;
-(void)outputSequenceWasFlushed:(id)arg1 ;
-(void)setCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(id)initWithCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
@end

