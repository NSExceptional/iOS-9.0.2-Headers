/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {

	PDAnimationInfoData* mEntrance;
	PDAnimationInfoData* mExit;
	PDAnimationInfoData* mMedia;
	PDMediaNode* mediaNode;

}

@property (nonatomic,retain) PDAnimationInfoData * mediaData; 
@property (nonatomic,retain) PDMediaNode * mediaNode; 
-(void)dealloc;
-(id)description;
-(PDMediaNode *)mediaNode;
-(void)setEntranceData:(id)arg1 ;
-(id)entranceData;
-(void)setExitData:(id)arg1 ;
-(id)exitData;
-(PDAnimationInfoData *)mediaData;
-(void)setMediaData:(PDAnimationInfoData *)arg1 ;
-(void)setMediaNode:(PDMediaNode *)arg1 ;
@end

