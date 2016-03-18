/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, TIWordSearchCandidateResultSet, NSCache, NSString, NSMutableArray, TICandidateSorter, NSOperationQueue, NSMutableDictionary, NSArray;

@interface TIKeyboardInputManager_ja_JP : TIKeyboardInputManager_zh_ja {

	BOOL _isCandidateSelectionSuppressed;
	TIWordSearch* _kbws;
	TIWordSearchCandidateResultSet* _wordSearchCandidateResultSet;
	NSCache* _candidatesCache;
	NSString* _convertStringForCurrentCandidates;
	BOOL _isPhraseBoundarySet;
	unsigned long long _remainingInputLength;
	BOOL _shouldLearnAcceptedCandidate;
	NSMutableArray* _recentlyCommittedCandidatesForReanalysis;
	BOOL _isEmojiFacemarkMode;
	NSString* _alternateDisplayString;
	BOOL _flickUsed;
	TICandidateSorter* _candidateSorter;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _touchDataArray;
	NSMutableDictionary* _touchDownEvents;
	NSMutableDictionary* _touchUpEvents;
	NSArray* _clearedTouchDataArray;
	NSArray* _savedGeometryData;
	NSArray* _savedTouchData;

}

@property (assign,nonatomic) BOOL isEmojiFacemarkMode; 
@property (nonatomic,copy) NSString * alternateDisplayString;                                            //@synthesize alternateDisplayString=_alternateDisplayString - In the implementation block
@property (readonly) TICandidateSorter * candidateSorter;                                                //@synthesize candidateSorter=_candidateSorter - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * wordSearchCandidateResultSet;              //@synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet - In the implementation block
@property (nonatomic,retain) NSCache * candidatesCache;                                                  //@synthesize candidatesCache=_candidatesCache - In the implementation block
@property (assign,nonatomic) BOOL flickUsed;                                                             //@synthesize flickUsed=_flickUsed - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentlyCommittedCandidatesForReanalysis;                  //@synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * touchDownEvents;                                      //@synthesize touchDownEvents=_touchDownEvents - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * touchUpEvents;                                        //@synthesize touchUpEvents=_touchUpEvents - In the implementation block
@property (nonatomic,readonly) NSMutableArray * touchDataArray;                                          //@synthesize touchDataArray=_touchDataArray - In the implementation block
@property (nonatomic,retain) NSArray * clearedTouchDataArray;                                            //@synthesize clearedTouchDataArray=_clearedTouchDataArray - In the implementation block
@property (nonatomic,retain) NSArray * savedGeometryData;                                                //@synthesize savedGeometryData=_savedGeometryData - In the implementation block
@property (nonatomic,retain) NSArray * savedTouchData;                                                   //@synthesize savedTouchData=_savedTouchData - In the implementation block
+(id)sortTitleFromSort:(unsigned long long)arg1 ;
+(unsigned long long)sortFromSortTitle:(id)arg1 ;
+(Class)wordSearchClass;
+(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(id)keyboardBehaviors;
-(BOOL)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(id)searchStringForMarkedText;
-(id)inputString;
-(BOOL)shouldExtendPriorWord;
-(unsigned)inputIndex;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(unsigned long long)phraseBoundary;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(long long)keyHitTest:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)flickUsed;
-(void)setFlickUsed:(BOOL)arg1 ;
-(void)setIsEmojiFacemarkMode:(BOOL)arg1 ;
-(NSMutableDictionary *)touchDownEvents;
-(void)setAlternateDisplayString:(NSString *)arg1 ;
-(void)_addInput:(id)arg1 ;
-(void)_cancelCandidatesThread;
-(BOOL)isEmojiFacemarkMode;
-(void)_deleteFromInput;
-(id)_inputString;
-(NSString *)alternateDisplayString;
-(id)_convertString;
-(unsigned long long)actualInputIndex;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(void)makeCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 reanalysisMode:(BOOL)arg3 ;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)hasGroupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(TICandidateSorter *)candidateSorter;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 inputString:(id)arg3 ;
-(unsigned long long)remainingInputLengthOfString:(id)arg1 index:(unsigned long long)arg2 candidate:(id)arg3 ;
-(void)appendToLogDataForInput:(id)arg1 candidate:(id)arg2 ;
-(void)addRecentlyCommittedCandidatesForReanalysis:(void*)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(void)setTouchDownEvents:(NSMutableDictionary *)arg1 ;
-(void)setTouchUpEvents:(NSMutableDictionary *)arg1 ;
-(TIWordSearchCandidateResultSet *)wordSearchCandidateResultSet;
-(void)setWordSearchCandidateResultSet:(TIWordSearchCandidateResultSet *)arg1 ;
-(void*)mecabraCandidateRefFromCandidate:(id)arg1 ;
-(NSMutableArray *)recentlyCommittedCandidatesForReanalysis;
-(void)setRecentlyCommittedCandidatesForReanalysis:(NSMutableArray *)arg1 ;
-(void)loadAddressBook;
-(NSMutableDictionary *)touchUpEvents;
-(void)setSavedGeometryData:(NSArray *)arg1 ;
-(NSMutableArray *)touchDataArray;
-(void)setSavedTouchData:(NSArray *)arg1 ;
-(NSArray *)clearedTouchDataArray;
-(void)setClearedTouchDataArray:(NSArray *)arg1 ;
-(void)insertDummyTouchDataAtIndex:(unsigned long long)arg1 ;
-(void)saveTouchDataForPathIndex:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)savedGeometryData;
-(NSArray *)savedTouchData;
-(id)touchDataForPathIndex:(long long)arg1 ;
-(id)wordSearch;
-(id)initWithInputMode:(id)arg1 ;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(NSCache *)candidatesCache;
-(void)setCandidatesCache:(NSCache *)arg1 ;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)clearDynamicDictionary;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)wordCharacters;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(void)acceptInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)dictionaryInputMode;
-(void)loadFavoniusLanguageModel;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)geometryModelData;
-(BOOL)isPartialCandidate;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(id)sortingMethods;
-(void)inputLocationChanged;
-(id)titleForSortingMethod:(id)arg1 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)rawInputString;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(id)didAcceptCandidate:(id)arg1 ;
-(BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)remainingInput;
-(id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2 ;
@end
