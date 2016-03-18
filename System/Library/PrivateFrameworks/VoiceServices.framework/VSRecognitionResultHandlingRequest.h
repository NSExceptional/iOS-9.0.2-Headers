/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionResultHandler;
@class NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	id<VSRecognitionResultHandler> _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(void)dealloc;
-(id)handler;
-(id)results;
-(id)nextAction;
-(void)setNextAction:(id)arg1 ;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
@end

