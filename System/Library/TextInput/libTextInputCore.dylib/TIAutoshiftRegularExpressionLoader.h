/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSString;

@interface TIAutoshiftRegularExpressionLoader : NSObject {

	NSRegularExpression* _regex;
	NSString* _sentenceDelimitingCharacters;
	NSString* _sentenceTrailingCharacters;
	NSString* _nextSentencePrefixCharacters;

}

@property (nonatomic,retain) NSRegularExpression * regex;                            //@synthesize regex=_regex - In the implementation block
@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters;              //@synthesize sentenceDelimitingCharacters=_sentenceDelimitingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters;                //@synthesize sentenceTrailingCharacters=_sentenceTrailingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * nextSentencePrefixCharacters;              //@synthesize nextSentencePrefixCharacters=_nextSentencePrefixCharacters - In the implementation block
+(id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(void)dealloc;
-(NSString *)sentenceTrailingCharacters;
-(NSString *)sentenceDelimitingCharacters;
-(void)setRegex:(NSRegularExpression *)arg1 ;
-(id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(NSRegularExpression *)regex;
-(NSString *)nextSentencePrefixCharacters;
-(void)startBackgroundLoad;
@end

