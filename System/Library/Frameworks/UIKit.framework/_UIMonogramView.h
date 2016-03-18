/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface _UIMonogramView : UIView {

	NSString* _name;
	NSString* _monogram;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * monogram;              //@synthesize monogram=_monogram - In the implementation block
@property (nonatomic,retain) UILabel * label;                //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)monogramForName:(id)arg1 ;
-(void)setMonogram:(NSString *)arg1 ;
-(NSString *)monogram;
-(id)labelForMonogram:(id)arg1 ;
@end

