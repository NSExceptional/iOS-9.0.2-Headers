/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDAction.h>

@class LSAppLink;

@interface DDOpenURLAction : DDAction {

	LSAppLink* _appLink;
	BOOL _appLinkInitDone;

}
-(void)dealloc;
-(id)localizedName;
-(void)perform;
-(id)appLink;
-(id)companionAction;
-(BOOL)useAppLink;
@end
