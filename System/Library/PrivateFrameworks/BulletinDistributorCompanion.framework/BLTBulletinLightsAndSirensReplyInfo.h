/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLTBulletinLightsAndSirensReplyInfo : NSObject {

	BOOL _handledLightsAndSirens;
	BOOL _didPlayLightsAndSirens;
	/*^block*/id _reply;

}

@property (nonatomic,copy) id reply;                                   //@synthesize reply=_reply - In the implementation block
@property (assign,nonatomic) BOOL handledLightsAndSirens;              //@synthesize handledLightsAndSirens=_handledLightsAndSirens - In the implementation block
@property (assign,nonatomic) BOOL didPlayLightsAndSirens;              //@synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens - In the implementation block
-(BOOL)didPlayLightsAndSirens;
-(void)setDidPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)handledLightsAndSirens;
-(void)setHandledLightsAndSirens:(BOOL)arg1 ;
-(void)setReply:(id)arg1 ;
-(id)reply;
@end

