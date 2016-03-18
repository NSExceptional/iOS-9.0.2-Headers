/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class UILabel, NSMutableArray, NSArray, NSAttributedString;

@interface MKPlaceAttributionCell : ABContactCell {

	UILabel* _label;
	NSMutableArray* _scaledConstraints;
	NSArray* _marginConstraints;

}

@property (nonatomic,retain) NSAttributedString * attributionString; 
@property (nonatomic,retain) UILabel * label;                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSMutableArray * scaledConstraints;                  //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                         //@synthesize marginConstraints=_marginConstraints - In the implementation block
+(double)intrinsicContentHeight;
+(id)fontForLabel;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(void)contentSizeDidChange;
-(NSArray *)marginConstraints;
-(void)refreshMarginConstraints;
-(NSMutableArray *)scaledConstraints;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributionString;
-(id)updatedAttributionStringFromString:(id)arg1 updateColorOnly:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

