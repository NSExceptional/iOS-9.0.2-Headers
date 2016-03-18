/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@protocol FBSDisplayLayoutMonitorClientDelegate;
@interface FBSDisplayLayoutMonitorClient : FBSSystemServiceFacilityClient {

	id<FBSDisplayLayoutMonitorClientDelegate> _delegate;

}
-(void)invalidate;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
-(void)_handleDisplayLayoutUpdate:(id)arg1 ;
@end
