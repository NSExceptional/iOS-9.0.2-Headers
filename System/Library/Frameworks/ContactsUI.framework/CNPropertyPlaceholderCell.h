/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(UILabel *)label;
-(id)labelView;
-(BOOL)shouldPerformDefaultAction;
@end

