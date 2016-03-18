/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayerHost.h>

@interface FigBaseCALayerHost : CALayerHost {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(BOOL)preventsChangesToSublayerHierarchy;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
@end

