/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UILabel.h>

@class UILabel;

@interface _MKAnimatableLabel : UILabel {

	UILabel* _label;

}
+(CGAffineTransform)animationTransformForString:(id)arg1 fromFont:(id)arg2 toFont:(id)arg3 percentage:(double)arg4 ;
+(CGAffineTransform)animationTransformForString:(id)arg1 fromFont:(id)arg2 toFont:(id)arg3 ;
-(void)_localeDidChange;
-(void)setLabelTransform:(CGAffineTransform)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
@end

