/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface LegacyTileLayer : CALayer {

	LegacyTileGrid* _tileGrid;
	unsigned _paintCount;

}

@property (assign,nonatomic) unsigned paintCount;                   //@synthesize paintCount=_paintCount - In the implementation block
@property (assign,nonatomic) LegacyTileGrid* tileGrid;              //@synthesize tileGrid=_tileGrid - In the implementation block
+(id)layerBeingPainted;
-(id)actionForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(unsigned)paintCount;
-(void)setPaintCount:(unsigned)arg1 ;
-(LegacyTileGrid*)tileGrid;
-(void)setTileGrid:(LegacyTileGrid*)arg1 ;
@end

