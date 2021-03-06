/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class NSString;

@interface SUScriptDocumentInteractionControllerNativeObject : SUScriptNativeObject <UIDocumentInteractionControllerDelegate> {

	BOOL _didPickApplication;
	BOOL _isVisible;
	/*^block*/id _presentationBlock;
	BOOL _redisplayAfterRotation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(BOOL)_isAffectedByWindowNotification:(id)arg1 ;
-(void)presentUsingBlock:(/*^block*/id)arg1 ;
@end

