/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputMode, NSDate, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject {

	BOOL _valid;
	TIInputMode* _inputMode;
	NSDate* _lastAdaptationDate;
	TILanguageModelAdaptationContext* _currentAdaptationContext;

}

@property (assign,getter=isValid,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) TIInputMode * inputMode;                                              //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSDate * lastAdaptationDate;                                              //@synthesize lastAdaptationDate=_lastAdaptationDate - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * currentAdaptationContext;              //@synthesize currentAdaptationContext=_currentAdaptationContext - In the implementation block
+(id)handleForInputMode:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(TIInputMode *)inputMode;
-(void)load;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)didFinishLearning;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(void)setLastAdaptationDate:(NSDate *)arg1 ;
-(TILanguageModelAdaptationContext *)currentAdaptationContext;
-(NSDate *)lastAdaptationDate;
-(void)setCurrentAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(void)updateAdaptationContext:(id)arg1 ;
@end

