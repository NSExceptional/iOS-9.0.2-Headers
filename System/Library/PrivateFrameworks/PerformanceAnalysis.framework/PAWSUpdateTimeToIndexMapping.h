/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@interface PAWSUpdateTimeToIndexMapping : NSObject {

	unsigned long long _waitStartSampleIndex;
	unsigned long long _numWaitIndices;
	unsigned long long _deferStartSampleIndex;
	unsigned long long _numDeferIndices;
	unsigned long long _workStartSampleIndex;
	unsigned long long _numWorkIndices;

}

@property (readonly) unsigned long long frameStartSampleIndex; 
@property (readonly) unsigned long long numFrameIndices; 
@property (readonly) unsigned long long frameEndSampleIndex; 
@property (readonly) unsigned long long waitStartSampleIndex;               //@synthesize waitStartSampleIndex=_waitStartSampleIndex - In the implementation block
@property (readonly) unsigned long long numWaitIndices;                     //@synthesize numWaitIndices=_numWaitIndices - In the implementation block
@property (readonly) unsigned long long waitEndSampleIndex; 
@property (readonly) unsigned long long deferStartSampleIndex;              //@synthesize deferStartSampleIndex=_deferStartSampleIndex - In the implementation block
@property (readonly) unsigned long long numDeferIndices;                    //@synthesize numDeferIndices=_numDeferIndices - In the implementation block
@property (readonly) unsigned long long deferEndSampleIndex; 
@property (readonly) unsigned long long workStartSampleIndex;               //@synthesize workStartSampleIndex=_workStartSampleIndex - In the implementation block
@property (readonly) unsigned long long numWorkIndices;                     //@synthesize numWorkIndices=_numWorkIndices - In the implementation block
@property (readonly) unsigned long long workEndSampleIndex; 
+(id)arrayOfMappingsFromWSUpdataDataArray:(id)arg1 andSampleDataStore:(id)arg2 ;
-(unsigned long long)waitStartSampleIndex;
-(unsigned long long)deferStartSampleIndex;
-(unsigned long long)workStartSampleIndex;
-(unsigned long long)numWaitIndices;
-(unsigned long long)numDeferIndices;
-(unsigned long long)numWorkIndices;
-(unsigned long long)frameStartSampleIndex;
-(unsigned long long)numFrameIndices;
-(id)initWithWSUpdateData:(id)arg1 andSampleDataStore:(id)arg2 andHintIndex:(unsigned long long)arg3 ;
-(unsigned long long)frameEndSampleIndex;
-(unsigned long long)waitEndSampleIndex;
-(unsigned long long)deferEndSampleIndex;
-(unsigned long long)workEndSampleIndex;
-(void)printFrameIndexRangeToStream:(_sFILE*)arg1 withTranslationDelta:(long long)arg2 ;
-(void)printWaitIndexRangeToStream:(_sFILE*)arg1 withTranslationDelta:(long long)arg2 ;
-(void)printDeferIndexRangeToStream:(_sFILE*)arg1 withTranslationDelta:(long long)arg2 ;
-(void)printWorkIndexRangeToStream:(_sFILE*)arg1 withTranslationDelta:(long long)arg2 ;
@end

