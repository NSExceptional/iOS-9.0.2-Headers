/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

	BOOL _connected;
	BOOL _shouldAnimateConnection;

}
-(id)contentsImage;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)performPendedActions;
-(double)alphaForConnected:(BOOL)arg1 ;
-(void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
@end

