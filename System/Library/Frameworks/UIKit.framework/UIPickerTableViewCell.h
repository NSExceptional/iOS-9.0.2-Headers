/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {

	UITapGestureRecognizer* _tap;
	UIPickerTableView* pickerTable;

}

@property (assign,nonatomic) UIPickerTableView * pickerTable; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(UIPickerTableView *)pickerTable;
-(void)setPickerTable:(UIPickerTableView *)arg1 ;
@end
