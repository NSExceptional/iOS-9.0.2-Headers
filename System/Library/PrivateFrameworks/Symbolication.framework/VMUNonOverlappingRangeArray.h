/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray
-(void)addOrExtendRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 excludingRanges:(id)arg2 ;
-(void)_mergeAllBitsOfRange:(VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3 ;
-(void)sortAndMergeRanges;
-(void)mergeRanges:(id)arg1 ;
-(void)mergeRanges:(id)arg1 excludingRanges:(id)arg2 ;
-(id)subtract:(id)arg1 mergeRanges:(BOOL)arg2 ;
@end

