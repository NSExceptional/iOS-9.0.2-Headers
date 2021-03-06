/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIPageViewController, _UIQueuingScrollView, UIPageControl;

@interface _UIPageViewControllerContentView : UIView {

	UIPageViewController* _pageViewController;
	_UIQueuingScrollView* _scrollView;
	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) _UIQueuingScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl;                    //@synthesize pageControl=_pageControl - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(_UIQueuingScrollView *)scrollView;
-(id)preferredFocusedView;
-(BOOL)canBecomeFocused;
-(CGRect)_scrollViewFrame;
-(double)_pageSpacing;
-(void)_setupPageControl:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andPageViewController:(id)arg2 ;
-(void)invalidatePageViewController;
-(UIPageControl *)pageControl;
@end

