/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPDCNDetectedFace : NSObject {

	float _confidence;
	CGRect _boundingbox;

}

@property (assign,nonatomic) CGRect boundingbox;              //@synthesize boundingbox=_boundingbox - In the implementation block
@property (assign,nonatomic) float confidence;                //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(CGRect)boundingbox;
-(void)setBoundingbox:(CGRect)arg1 ;
@end

