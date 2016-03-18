/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIRefreshControl, UIColor, NSAttributedString;

@interface _UIRefreshControlContentView : UIView {

	UIRefreshControl* _refreshControl;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic) UIRefreshControl * refreshControl;                 //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) double minimumSnappingHeight; 
@property (nonatomic,readonly) double maximumSnappingHeight; 
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(long long)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)refreshControlInvalidatedSnappingHeight;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(double)minimumSnappingHeight;
-(void)willTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)didTransitionFromState:(int)arg1 toState:(int)arg2 ;
@end

