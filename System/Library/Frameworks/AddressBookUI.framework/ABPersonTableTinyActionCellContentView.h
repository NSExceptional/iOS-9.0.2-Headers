/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, ABPersonTableTinyActionCell, NSArray;

@interface ABPersonTableTinyActionCellContentView : UIView {

	NSMutableArray* _actions;
	NSMutableArray* _buttons;
	UIButton* _highlightedButton;
	ABPersonTableTinyActionCell* _cell;

}

@property (assign,nonatomic) ABPersonTableTinyActionCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
-(void)unhighlight;
-(void)refreshActions;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)actions;
-(ABPersonTableTinyActionCell *)cell;
-(void)setCell:(ABPersonTableTinyActionCell *)arg1 ;
@end

