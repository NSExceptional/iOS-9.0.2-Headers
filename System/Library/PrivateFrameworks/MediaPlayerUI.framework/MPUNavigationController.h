/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface MPUNavigationController : UINavigationController {

	BOOL _supportsStandardInterfaceOrientations;
	/*^block*/id _overrideSupportedInterfaceOrientationsHandler;

}

@property (nonatomic,copy) id overrideSupportedInterfaceOrientationsHandler;              //@synthesize overrideSupportedInterfaceOrientationsHandler=_overrideSupportedInterfaceOrientationsHandler - In the implementation block
@property (assign,nonatomic) BOOL supportsStandardInterfaceOrientations;                  //@synthesize supportsStandardInterfaceOrientations=_supportsStandardInterfaceOrientations - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportsStandardInterfaceOrientations:(BOOL)arg1 ;
-(id)overrideSupportedInterfaceOrientationsHandler;
-(void)setOverrideSupportedInterfaceOrientationsHandler:(id)arg1 ;
-(BOOL)supportsStandardInterfaceOrientations;
@end

