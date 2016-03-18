/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class NSDictionary, UILabel, CNTransportButton;

@interface CNStarkFaceTimeCell : CNContactCell {

	id<CNPropertyCellDelegate> _delegate;
	NSDictionary* _labelTextAttributes;
	UILabel* _faceTimeLabel;
	CNTransportButton* _transportIcon;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                        //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (nonatomic,retain) UILabel * faceTimeLabel;                                 //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon;                     //@synthesize transportIcon=_transportIcon - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)performDefaultAction;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(CNTransportButton *)transportIcon;
-(id)constantConstraints;
-(void)_cnui_applyContactStyle;
-(NSDictionary *)labelTextAttributes;
-(void)transportButtonClicked:(id)arg1 ;
-(UILabel *)faceTimeLabel;
-(void)setFaceTimeLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

