/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>

@protocol CNContactListBannerViewDelegate;
@class CNContactFormatter, NSString, CNContact, UIGestureRecognizer, UIView, UILabel, NSDictionary, NSArray, NSLayoutConstraint;

@interface CNContactListBannerView : UIView {

	id<CNContactListBannerViewDelegate> _delegate;
	CNContactFormatter* _formatter;
	NSString* _footnoteTitle;
	NSString* _footnoteValue;
	CNContact* _meContact;
	UIGestureRecognizer* _longPress;
	UIView* _photoViewContainer;
	UIView* _labelViewContainer;
	UIView* _photoView;
	UILabel* _titleLabel;
	UILabel* _footnoteLabel;
	NSString* _footnoteSpacer;
	NSDictionary* _viewsDict;
	NSArray* _currentConstraints;
	NSLayoutConstraint* _bannerHeightConstraint;
	NSArray* _photoViewConstraints;

}

@property (assign,nonatomic,__weak) id<CNContactListBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContactFormatter * formatter;                                   //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,copy) NSString * footnoteTitle;                                           //@synthesize footnoteTitle=_footnoteTitle - In the implementation block
@property (nonatomic,copy) NSString * footnoteValue;                                           //@synthesize footnoteValue=_footnoteValue - In the implementation block
@property (nonatomic,copy) CNContact * meContact;                                              //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * longPress;                                  //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,readonly) UIView * photoViewContainer;                                    //@synthesize photoViewContainer=_photoViewContainer - In the implementation block
@property (nonatomic,readonly) UIView * labelViewContainer;                                    //@synthesize labelViewContainer=_labelViewContainer - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                               //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;                                        //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,readonly) BOOL footnoteTitleShouldBeGrey; 
@property (nonatomic,retain) NSString * footnoteSpacer;                                        //@synthesize footnoteSpacer=_footnoteSpacer - In the implementation block
@property (nonatomic,readonly) NSDictionary * viewsDict;                                       //@synthesize viewsDict=_viewsDict - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                                     //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bannerHeightConstraint;                    //@synthesize bannerHeightConstraint=_bannerHeightConstraint - In the implementation block
@property (nonatomic,readonly) NSArray * photoViewConstraints;                                 //@synthesize photoViewConstraints=_photoViewConstraints - In the implementation block
+(id)descriptorForRequiredKeys;
-(void)cellWasLongPressed:(id)arg1 ;
-(void)setLongPress:(UIGestureRecognizer *)arg1 ;
-(void)cellWasSingleTapped:(id)arg1 ;
-(id)constrainstWithoutPhotoViewWithLeftMargin:(double)arg1 minimumRightMargin:(double)arg2 minimumVerticalMargins:(double)arg3 ;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(id)constraintsForPhotoView:(id)arg1 ;
-(id)constrainstWithPhotoViewWithLeftMargin:(double)arg1 minimumRightMargin:(double)arg2 minimumVerticalMargins:(double)arg3 ;
-(UIGestureRecognizer *)longPress;
-(CNContact *)meContact;
-(NSLayoutConstraint *)bannerHeightConstraint;
-(BOOL)footnoteTitleShouldBeGrey;
-(NSString *)footnoteTitle;
-(NSString *)footnoteValue;
-(NSString *)footnoteSpacer;
-(UILabel *)footnoteLabel;
-(void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3 ;
-(void)setFootnoteTitle:(NSString *)arg1 ;
-(void)setFootnoteValue:(NSString *)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(UIView *)photoViewContainer;
-(UIView *)labelViewContainer;
-(void)setFootnoteSpacer:(NSString *)arg1 ;
-(NSDictionary *)viewsDict;
-(NSArray *)currentConstraints;
-(NSArray *)photoViewConstraints;
-(CNContactFormatter *)formatter;
-(void)setFormatter:(CNContactFormatter *)arg1 ;
-(UIView *)photoView;
-(void)setPhotoView:(UIView *)arg1 ;
-(void)setDelegate:(id<CNContactListBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CNContactListBannerViewDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)_updateLabel;
-(void)copy:(id)arg1 ;
-(void)menuDidHide:(id)arg1 ;
-(void)showMenu;
@end

