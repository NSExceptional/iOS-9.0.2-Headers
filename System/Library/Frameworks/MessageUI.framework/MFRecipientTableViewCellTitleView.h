/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MFTinting.h>

@class NSAttributedString, UIColor, UILabel, NSString;

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting> {

	NSAttributedString* _deselectedAttributedString;
	UIColor* _tintColor;
	BOOL _shouldDim;
	BOOL _highlighted;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldDim;                        //@synthesize shouldDim=_shouldDim - In the implementation block
+(id)defaultStringAttributes;
+(id)highlightedStringAttributes;
+(id)regularStringAttributes;
+(double)height;
-(void)setShouldDim:(BOOL)arg1 ;
-(BOOL)shouldDim;
-(void)setTintColor:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)tintColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)highlighted;
@end

