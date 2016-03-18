/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UABestAppSuggestionManagerDelegate;
@class UABestAppSuggestion, NSXPCConnection;

@interface UABestAppSuggestionManager : NSObject {

	id<UABestAppSuggestionManagerDelegate> _delegate;
	BOOL _listeningForBestAppSuggestions;
	int _bestAppNotificationCount;
	UABestAppSuggestion* _lastBestAppSuggestion;
	NSXPCConnection* _connection;

}

@property (__weak) id<UABestAppSuggestionManagerDelegate> delegate; 
@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
-(void)notifyBestAppChanged:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 dynamicIdentifier:(id)arg6 when:(id)arg7 confidence:(double)arg8 deviceName:(id)arg9 deviceIdentifier:(id)arg10 deviceType:(id)arg11 ;
-(void)setDelegate:(id<UABestAppSuggestionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UABestAppSuggestionManagerDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)startListeningForBestAppSuggestions;
-(void)stopListeningForBestAppSuggestions;
-(id)bestAppSuggestion;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6 ;
-(void)removeBestApp:(id)arg1 options:(id)arg2 ;
-(BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)bestAppSuggestions:(long long)arg1 ;
-(void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1 ;
-(void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2 ;
-(void)bestAppSuggestionLaunchWasCancelled:(id)arg1 ;
-(void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2 ;
-(void)launchAppWithBestAppSuggestion:(id)arg1 ;
@end

