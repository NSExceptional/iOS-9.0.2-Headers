/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy {

	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy,readonly) id handlerBlock;              //@synthesize handlerBlock=_handlerBlock - In the implementation block
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(id)handlerBlock;
@end

