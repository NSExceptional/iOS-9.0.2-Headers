/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAlertView.h>

@interface _UIUserNotificationAlertView : UIAlertView {

	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	BOOL _runsModal;
	BOOL _runningModal;
	id _strongDelegate;
	id _retainedSelf;

}
+(void)initialize;
-(void)show;
-(void)dealloc;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(id)textFieldAtIndex:(long long)arg1 ;
-(BOOL)isVisible;
-(BOOL)runsModal;
-(void)setRunsModal:(BOOL)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(void)_removeObservervations;
-(void)cancelAlertView;
-(void)_cancelUserNotification;
-(void)setHostedWindow:(id)arg1 ;
@end

