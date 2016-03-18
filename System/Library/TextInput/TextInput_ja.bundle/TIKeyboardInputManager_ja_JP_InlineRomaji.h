/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TIKeyboardInputManager_ja_JP.h>

@class NSMutableArray, NSString;

@interface TIKeyboardInputManager_ja_JP_InlineRomaji : TIKeyboardInputManager_ja_JP {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;

}
+(Class)wordSearchClass;
-(void)dealloc;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(id)inputString;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(void)updateState;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(BOOL)remainingInputIsRomanAlphabet:(unsigned long long)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(void)loadDictionaries;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(BOOL)isPartialCandidate;
-(void)inputLocationChanged;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(id)remainingInput;
@end

