/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNNode.h>

@class OKSCNOrigamiGeometry;

@interface OKSCNOrigamiNode : SCNNode {

	OKSCNOrigamiGeometry* _origamiGeometry;

}

@property (assign,nonatomic) double foldingAmount; 
@property (nonatomic,readonly) unsigned long long state; 
+(id)nodeWithSize:(double)arg1 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)close;
-(void)open;
-(void)setFrontContents:(id)arg1 ;
-(void)setBackContents:(id)arg1 ;
-(void)updateFoldingRendering;
-(void)toggle;
@end

