/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUIConstrainedFontsTableViewCell {

	UILabel* _additionalDetailLabel;

}

@property (nonatomic,retain,readonly) UILabel * additionalDetailLabel; 
-(UILabel *)additionalDetailLabel;
-(BOOL)leftFrame:(CGRect)arg1 overlapsRightFrame:(CGRect)arg2 difference:(double*)arg3 ;
-(void)layoutSubviews;
@end

