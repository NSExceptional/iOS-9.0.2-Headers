/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicContextualAlertAction.h>

@interface MusicContextualLibraryUpdateAlertAction : MusicContextualAlertAction {

	BOOL _isAddAction;
	BOOL _isDeleteLibraryUpdate;
	BOOL _isKeepLocalAction;

}

@property (nonatomic,readonly) BOOL isAddAction;                        //@synthesize isAddAction=_isAddAction - In the implementation block
@property (nonatomic,readonly) BOOL isDeleteLibraryUpdate;              //@synthesize isDeleteLibraryUpdate=_isDeleteLibraryUpdate - In the implementation block
@property (nonatomic,readonly) BOOL isKeepLocalAction;                  //@synthesize isKeepLocalAction=_isKeepLocalAction - In the implementation block
+(void)getContextualLibraryAddRemoveAction:(id*)arg1 keepLocalAction:(id*)arg2 forEntityValueContext:(id)arg3 overrideItemEntityProvider:(id)arg4 shouldDismissHandler:(/*^block*/id)arg5 additionalPresentationHandler:(/*^block*/id)arg6 didDismissHandler:(/*^block*/id)arg7 ;
+(id)notificationTokenForOverrideItemEntityProvider:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_showDeleteConfirmationActionAlertControllerWithTitle:(id)arg1 deleteActionTitle:(id)arg2 additionalPresentationHandler:(/*^block*/id)arg3 deletionHandler:(/*^block*/id)arg4 didDismissHandler:(/*^block*/id)arg5 ;
-(BOOL)isAddAction;
-(BOOL)isKeepLocalAction;
-(BOOL)isDeleteLibraryUpdate;
@end

