/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@class NSMutableArray, NSString, NSMutableString, NSArray;

@interface MecabraAnalysisContextImpl : NSObject {

	NSMutableArray* _candidateContext;
	NSString* _stringContext;
	NSString* _stringBeforeCaret;
	NSMutableString* _candidateContextString;
	BOOL _rebuildCandidateContextString;

}

@property (nonatomic,retain) NSString * stringBeforeCaret;                          //@synthesize stringBeforeCaret=_stringBeforeCaret - In the implementation block
@property (nonatomic,retain) NSString * stringContext;                              //@synthesize stringContext=_stringContext - In the implementation block
@property (nonatomic,readonly) NSArray * candidateContextForAnalysis; 
@property (nonatomic,readonly) NSString * stringContextForAnalysis; 
@property (nonatomic,retain) NSMutableString * candidateContextString;              //@synthesize candidateContextString=_candidateContextString - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidateContext;                     //@synthesize candidateContext=_candidateContext - In the implementation block
@property (assign,nonatomic) BOOL rebuildCandidateContextString;                    //@synthesize rebuildCandidateContextString=_rebuildCandidateContextString - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setCandidateContext:(NSMutableArray *)arg1 ;
-(void)setStringContext:(NSString *)arg1 ;
-(NSString *)stringContext;
-(NSMutableArray *)candidateContext;
-(void)addCandidate:(id)arg1 ;
-(void)setStringBeforeCaret:(NSString *)arg1 ;
-(void)adjustCandidateContext;
-(void)revertLastCommittedCandidate;
-(NSString *)stringContextForAnalysis;
-(NSArray *)candidateContextForAnalysis;
-(NSMutableString *)candidateContextString;
-(BOOL)rebuildCandidateContextString;
-(void)setRebuildCandidateContextString:(BOOL)arg1 ;
-(NSString *)stringBeforeCaret;
-(void)clearContextForAddition;
-(SCD_Struct_Me5)positionInContextWithPartialDocumentStringLength:(unsigned long long)arg1 ;
-(void)setCandidateContextString:(NSMutableString *)arg1 ;
@end

