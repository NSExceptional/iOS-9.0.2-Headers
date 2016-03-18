/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPStoreItemOffer, NSSet;

@interface MPUSystemBuyButtonConfiguration : NSObject {

	BOOL _visible;
	float _downloadProgress;
	MPStoreItemOffer* _offer;
	unsigned long long _progressType;

}

@property (nonatomic,retain) MPStoreItemOffer * offer;                            //@synthesize offer=_offer - In the implementation block
@property (assign,nonatomic) BOOL visible;                                        //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) unsigned long long progressType;                     //@synthesize progressType=_progressType - In the implementation block
@property (assign,nonatomic) float downloadProgress;                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) NSSet * interfacePerceptibleKeyPaths; 
-(id)init;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setProgressType:(unsigned long long)arg1 ;
-(NSSet *)interfacePerceptibleKeyPaths;
-(void)setOffer:(MPStoreItemOffer *)arg1 ;
-(MPStoreItemOffer *)offer;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(unsigned long long)progressType;
@end

