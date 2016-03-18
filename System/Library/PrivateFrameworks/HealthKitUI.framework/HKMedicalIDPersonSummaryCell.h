/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIFont, NSLayoutConstraint, UIImage, NSString, NSDate;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell {

	UIImageView* _pictureView;
	UILabel* _nameLabel;
	UILabel* _birthdateLabel;
	UIFont* _nameLabelFont;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageGapConstraint;
	BOOL _resetFormatters;
	UIImage* _picture;
	NSString* _name;
	NSDate* _birthdate;

}

@property (nonatomic,retain) UIImage * picture;               //@synthesize picture=_picture - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * birthdate;              //@synthesize birthdate=_birthdate - In the implementation block
-(void)localeDidChange:(id)arg1 ;
-(void)setPicture:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setBirthdate:(NSDate *)arg1 ;
-(double)calculatedHeight;
-(void)updateSubviewsFromData;
-(void)_createConstraints;
-(double)_scaledValueForSmallWidth:(double)arg1 bigWidth:(double)arg2 ;
-(UIImage *)picture;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSDate *)birthdate;
@end

