/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

	int _signalStrengthRaw;
	int _signalStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)extraRightPadding;
-(id)contentsImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)_stringForRSSI;
@end

