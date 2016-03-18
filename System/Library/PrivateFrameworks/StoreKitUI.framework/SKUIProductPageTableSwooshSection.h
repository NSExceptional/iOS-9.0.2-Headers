/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>
#import <libobjc.A.dylib/SKUISwooshViewControllerDelegate.h>

@class SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIResourceLoader, SKUISwooshPageComponent, SKUILockupSwooshViewController, SKUIColorScheme, UIViewController, NSString;

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {

	/*^block*/id _actionBlock;
	SKUILockupSwooshArtworkLoader* _artworkLoader;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIResourceLoader* _resourceLoader;
	SKUISwooshPageComponent* _swooshComponent;
	SKUILockupSwooshViewController* _swooshViewController;

}

@property (nonatomic,copy) id actionBlock;                                           //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme; 
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                    //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,readonly) UIViewController * swooshViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(UIViewController *)swooshViewController;
-(id)_swooshViewController;
-(id)_artworkLoader;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2 ;
-(id)initWithLockups:(id)arg1 title:(id)arg2 ;
-(id)initWithItems:(id)arg1 title:(id)arg2 ;
@end

