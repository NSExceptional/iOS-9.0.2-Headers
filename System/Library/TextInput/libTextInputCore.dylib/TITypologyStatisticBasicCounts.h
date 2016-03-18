/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TITypologyStatisticCurrentAutocorrections.h>

@class NSMutableString, NSMutableArray;

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections {

	long long _touchCount;
	long long _characterCount;
	long long _predictedCharacterCount;
	long long _backspaceCount;
	long long _autocorrectionCount;
	long long _rejectedCandidateCount;
	long long _backspaceIntoAutocorrectionCount;
	NSMutableString* _recentText;
	NSMutableArray* _recentAutocorrectionLocations;

}

@property (nonatomic,readonly) long long touchCount;                                        //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,readonly) long long characterCount;                                    //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) long long predictedCharacterCount;                           //@synthesize predictedCharacterCount=_predictedCharacterCount - In the implementation block
@property (nonatomic,readonly) long long backspaceCount;                                    //@synthesize backspaceCount=_backspaceCount - In the implementation block
@property (nonatomic,readonly) long long autocorrectionCount;                               //@synthesize autocorrectionCount=_autocorrectionCount - In the implementation block
@property (nonatomic,readonly) long long rejectedCandidateCount;                            //@synthesize rejectedCandidateCount=_rejectedCandidateCount - In the implementation block
@property (nonatomic,readonly) long long backspaceIntoAutocorrectionCount;                  //@synthesize backspaceIntoAutocorrectionCount=_backspaceIntoAutocorrectionCount - In the implementation block
@property (nonatomic,readonly) NSMutableString * recentText;                                //@synthesize recentText=_recentText - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentAutocorrectionLocations;              //@synthesize recentAutocorrectionLocations=_recentAutocorrectionLocations - In the implementation block
-(void)handleTouch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)touchCount;
-(long long)characterCount;
-(void)visitRecordTextAccepted:(id)arg1 ;
-(long long)rejectedCandidateCount;
-(void)visitRecordCandidateRejected:(id)arg1 ;
-(NSMutableArray *)recentAutocorrectionLocations;
-(long long)autocorrectionCount;
-(void)visitRecordSkipHitTest:(id)arg1 ;
-(void)visitRecordHitTest:(id)arg1 ;
-(long long)backspaceCount;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(void)updateTextWithAcceptedCandidate:(id)arg1 ;
-(void)visitRecordSync:(id)arg1 ;
-(long long)predictedCharacterCount;
-(id)structuredReport;
-(NSMutableString *)recentText;
-(long long)backspaceIntoAutocorrectionCount;
@end

