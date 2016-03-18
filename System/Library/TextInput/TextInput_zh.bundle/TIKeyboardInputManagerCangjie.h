/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign,nonatomic) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign,nonatomic) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
+(Class)wordSearchClass;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(id)defaultCandidate;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)suchengEnabled;
-(void)setSupportsEnglish:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(BOOL)arg2 ;
-(void)updateMarkedText;
-(BOOL)firstCandidateIsEnglish;
-(BOOL)selectedCandidateIsEnglish;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(id)cangjieSet;
-(id)cangjieAlphabetSet;
-(BOOL)isPunctuationInput;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)nonstopPunctuationCharacters;
-(id)sortingMethods;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
@end

