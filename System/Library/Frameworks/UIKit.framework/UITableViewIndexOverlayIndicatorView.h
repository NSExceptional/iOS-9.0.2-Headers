/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer, UITableView, NSString;

@interface UITableViewIndexOverlayIndicatorView : UIView {

	UILabel* _label;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITableView* _table;

}

@property (nonatomic,copy) NSString * currentText; 
-(void)layoutSubviews;
-(void)_tapGestureChanged:(id)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(void)_invalidateTable;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
@end

