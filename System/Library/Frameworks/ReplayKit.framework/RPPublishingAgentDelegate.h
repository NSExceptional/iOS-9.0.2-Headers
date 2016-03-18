/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPPublishingAgentDelegate
@optional
-(void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
-(void)publishingAgentDidStartRemaking:(id)arg1;

@required
-(void)publishingAgentWillBeDisplayed:(id)arg1;
-(void)publishingAgentDoneButtonClicked:(id)arg1;
-(void)publishingAgentCancelButtonClicked:(id)arg1;
-(void)publishingAgentDidBeginPublishing:(id)arg1;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;

@end

