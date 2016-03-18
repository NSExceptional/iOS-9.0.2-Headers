/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UITextChecker : NSObject {

	id _reserved;
	long long _usdt;

}
+(void)setString:(id)arg1 isExemptFromChecker:(BOOL)arg2 ;
+(void)queryLocalUpdateAssets:(/*^block*/id)arg1 ;
+(long long)uniqueSpellDocumentTag;
+(id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned long long)arg4 scriptForBestLanguage:(id*)arg5 ;
+(CFSetRef)createDictHashTable:(BOOL)arg1 ;
+(id)openUserDictionary:(id)arg1 ;
+(id)dictionaryInfo:(id)arg1 ;
+(BOOL)_learnWord:(id)arg1 inDictionary:(id)arg2 ;
+(id)_wordsInDictionary:(id)arg1 ;
+(void)_setWords:(id)arg1 inDictionary:(id)arg2 ;
+(BOOL)_isWord:(id)arg1 inDictionary:(id)arg2 ;
+(BOOL)_forgetWord:(id)arg1 inDictionary:(id)arg2 ;
+(id)_textCheckerBackgroundQueue;
+(id)availableLanguages;
+(id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 ;
+(void)learnWord:(id)arg1 ;
+(BOOL)hasLearnedWord:(id)arg1 ;
+(void)unlearnWord:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_initWithAsynchronousLoading:(BOOL)arg1 ;
-(BOOL)_doneLoading;
-(NSRange)rangeOfMisspelledWordInString:(id)arg1 range:(NSRange)arg2 startingAt:(long long)arg3 wrap:(BOOL)arg4 language:(id)arg5 ;
-(id)_nameOfDictionaryForDocumentTag:(long long)arg1 ;
-(void)initUserDictionaries;
-(void)queryUpdateBundle;
-(void)initGlobals;
-(void)setIgnoredWords:(id)arg1 ;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
-(id)_checker;
-(long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2 ;
-(void)_setLanguageDictionaryName:(id)arg1 ;
-(void)_setDocumentDictionaryName:(id)arg1 ;
-(NSRange)_chunkAndFindMisspelledWordInString:(id)arg1 language:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long*)arg4 correction:(id*)arg5 usingChecker:(id)arg6 ;
-(NSRange)_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4 ;
-(NSRange)checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 details:(id*)arg5 ;
-(id)correctionForWordRange:(NSRange)arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)guessesForWordRange:(NSRange)arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)completionsForPartialWordRange:(NSRange)arg1 inString:(id)arg2 language:(id)arg3 ;
-(id)suggestWordInLanguage:(id)arg1 ;
-(BOOL)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(BOOL)arg2 language:(id)arg3 ;
-(id)stringForInputString:(id)arg1 language:(id)arg2 ;
-(id)alternativesForPinyinInputString:(id)arg1 ;
-(void)ignoreWord:(id)arg1 ;
-(id)ignoredWords;
-(BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2 ;
@end

