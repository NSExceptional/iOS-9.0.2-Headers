/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRModification.h>

@class NSString;

@interface PRZhuyinModification : PRModification {

	NSRange _range;
	NSString* _replacementString;
	unsigned long long _modificationType;
	NSRange _syllableRange;
	NSRange _additionalSyllableRange;
	double _modificationScore;
	unsigned long long _syllableCountScore;
	unsigned char _letters[5];
	BOOL _producesPartialSyllable;

}
-(unsigned long long)modificationType;
-(id)replacementString;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(BOOL)arg9 ;
-(double)modificationScore;
-(unsigned long long)syllableCountScore;
-(NSRange)syllableRange;
-(NSRange)additionalSyllableRange;
-(BOOL)producesPartialSyllable;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(BOOL)arg8 ;
-(NSRange)combinedSyllableRange;
-(BOOL)_shouldAppendLetter:(unsigned char)arg1 ;
@end

