/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImage;

@interface SFCrossfadingImageView : UIView {

	UIImage* _fromImage;
	UIImage* _toImage;
	double _progress;

}

@property (nonatomic,retain) UIImage * fromImage;              //@synthesize fromImage=_fromImage - In the implementation block
@property (nonatomic,retain) UIImage * toImage;                //@synthesize toImage=_toImage - In the implementation block
@property (assign,nonatomic) double progress;                  //@synthesize progress=_progress - In the implementation block
-(UIImage *)fromImage;
-(UIImage *)toImage;
-(void)setFromImage:(UIImage *)arg1 ;
-(void)setToImage:(UIImage *)arg1 ;
-(void)_updateCrossfade;
-(void)setProgress:(double)arg1 ;
-(double)progress;
@end

