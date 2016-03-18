/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_intl.bundle/TextInput_intl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManager.h>

@class TIHandwritingStrokes, NSArray, CHRecognizer;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager {

	TIHandwritingStrokes* _userDrawing;
	NSArray* _candidates;

}

@property (nonatomic,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;              //@synthesize userDrawing=_userDrawing - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                            //@synthesize candidates=_candidates - In the implementation block
-(void)dealloc;
-(NSArray *)candidates;
-(id)keyboardBehaviors;
-(BOOL)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(unsigned)inputCount;
-(id)defaultCandidate;
-(void)setCandidates:(NSArray *)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(CHRecognizer *)recognizer;
-(id)recognitionResultsForStrokes:(id)arg1 context:(id)arg2 ;
-(id)addInputObject:(id)arg1 withContext:(id)arg2 ;
-(TIHandwritingStrokes *)userDrawing;
-(void)updateCandidates;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(void)loadDictionaries;
-(id)handleKeyboardInput:(id)arg1 ;
-(void)inputLocationChanged;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
@end

