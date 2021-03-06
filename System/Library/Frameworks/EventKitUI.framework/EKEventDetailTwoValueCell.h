/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)value2View;
-(unsigned)visibleItems;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
-(id)titleView;
-(BOOL)update;
-(id)valueView;
@end

