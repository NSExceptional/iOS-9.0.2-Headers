/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@interface SBSApplicationShortcutClient : FBSSystemServiceFacilityClient
-(void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

