/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class _UIBackdropView, UIView, NSMutableArray, UIScrollView, NSArray, NSString;

@interface SKUIModernChartsView : UIView <UIScrollViewDelegate> {

	_UIBackdropView* _backdropView;
	UIEdgeInsets _contentInset;
	UIView* _headerView;
	NSMutableArray* _headerViews;
	BOOL _hideHeader;
	UIScrollView* _scrollView;
	NSArray* _viewControllers;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView; 
@property (assign,nonatomic) UIEdgeInsets contentInset;                     //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateHeader;
-(void)_layoutHeadersWithColumnSize:(CGSize)arg1 ;
-(void)_layoutViewControllersWithColumnSize:(CGSize)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(void)setColumnViewControllers:(id)arg1 ;
@end

