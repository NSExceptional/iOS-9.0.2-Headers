/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBWorkspaceScene.h>

@class NSMutableSet, NSMutableArray, BKSProcessAssertion;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {

	NSMutableSet* _allWatchdogs;
	NSMutableArray* _watchdogStack;
	BKSProcessAssertion* _launchBoostahAssertion;
	BKSProcessAssertion* _resumeProcessAssertion;
	BKSProcessAssertion* _suspendingProcessAssertion;
	BKSProcessAssertion* _seoProcessAssertion;
	BKSProcessAssertion* _deliverMessageProcessAssertion;
	unsigned long long _deliverMessageProcessAssertionCount;
	int _suspendType;
	BOOL _createResponseReceived;
	BOOL _transitioningToForeground;

}

@property (getter=_workspaceQueue_isTransitioningToForeground,nonatomic,readonly) BOOL transitioningToForeground;              //@synthesize transitioningToForeground=_transitioningToForeground - In the implementation block
-(void)dealloc;
-(void)host:(id)arg1 configureWithInitialClientSettings:(id)arg2 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithParentWorkspace:(id)arg1 host:(id)arg2 ;
-(void)_workspaceQueue_invalidate;
-(id)parentWorkspace;
-(id)_workspaceQueue_process;
-(void)_workspaceQueue_cancelAllWatchdogTimers;
-(void)_workspaceQueue_dropAllProcessAssertions;
-(void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1 ;
-(void)_workspaceQueue_dropSuspendingProcessAssertion;
-(void)_workspaceQueue_takeSuspendingProcessAssertion;
-(void)_workspaceQueue_dropSEOProcessAssertion;
-(void)_workspaceQueue_dropResumeProcessAssertion;
-(id)_workspaceQueue_newProcessAssertionForReason:(unsigned)arg1 withName:(id)arg2 transitionContext:(id)arg3 ;
-(unsigned long long)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)_workspaceQueue_createWatchdogForSceneAction:(unsigned long long)arg1 transitionContext:(id)arg2 ;
-(void)_workspaceQueue_cancelWatchdogTimer:(id)arg1 ;
-(void)_workspaceQueue_activateResponseReceived:(id)arg1 ;
-(void)_workspaceQueue_activateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_deactivateResponseReceived:(id)arg1 ;
-(void)_workspaceQueue_deactivateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1 ;
-(void)_workspaceQueue_dropDeliverMessageProcessAssertion;
-(void)_dispatchBlockAfterProcessLaunch:(/*^block*/id)arg1 ;
-(void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1 ;
-(long long)_workspaceQueue_lifecycleStateForSettings:(id)arg1 ;
-(void)_workspaceQueue_takeAssertionsForDeactivation:(BOOL)arg1 transitionContext:(id)arg2 ;
-(int)_workspaceQueue_pid;
-(void)_workspaceQueue_dropDeliverMessageProcessAssertion:(BOOL)arg1 ;
-(BOOL)_workspaceQueue_isTransitioningToForeground;
@end

