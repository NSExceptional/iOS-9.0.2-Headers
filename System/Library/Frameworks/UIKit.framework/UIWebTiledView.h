/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class WAKWindow;

@interface UIWebTiledView : UIView {

	WAKWindow* _wakWindow;
	int _inGestureType;
	int _tilingArea;
	BOOL _didFirstTileLayout;
	BOOL _layoutTilesInMainThread;
	BOOL _tilingModeIsLocked;
	BOOL _allowsPaintingAndScriptsWhilePanning;
	BOOL _editingTilingModeEnabled;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_didScroll;
-(CGRect)visibleRect;
-(void)setTileSize:(CGSize)arg1 ;
-(void)setMaxTileCount:(unsigned)arg1 ;
-(void)setTilingEnabled:(BOOL)arg1 ;
-(void)setLayoutTilesInMainThread:(BOOL)arg1 ;
-(void)layoutTilesNow;
-(void)setEditingTilingModeEnabled:(BOOL)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilingArea:(int)arg1 ;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)removeAllTiles;
-(void)removeForegroundTiles;
-(void)setInGesture:(int)arg1 ;
-(int)tilingArea;
-(void)_updateForScreen:(id)arg1 ;
-(void)_screenChanged:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)updateTilingMode;
-(BOOL)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)dumpTiles;
-(void)setWAKWindow:(id)arg1 ;
-(void)layoutTilesNowOnWebThread;
-(void)drawImageIntoTiles:(CGImageRef)arg1 ;
-(void)lockTilingMode;
-(void)unlockTilingMode;
-(BOOL)allowsPaintingAndScriptsWhilePanning;
-(void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1 ;
-(CGSize)tileSize;
-(void)setDrawsGrid:(BOOL)arg1 ;
-(BOOL)drawsGrid;
-(unsigned)maxTileCount;
-(unsigned)adjustedMaxTileCount;
-(BOOL)isTilingEnabled;
-(void)setLogsTilingChanges:(BOOL)arg1 ;
-(BOOL)logsTilingChanges;
-(void)setTileDrawingEnabled:(BOOL)arg1 ;
-(BOOL)editingTilingModeEnabled;
-(BOOL)tileDrawingEnabled;
-(BOOL)layoutTilesInMainThread;
-(id)wakWindow;
@end

