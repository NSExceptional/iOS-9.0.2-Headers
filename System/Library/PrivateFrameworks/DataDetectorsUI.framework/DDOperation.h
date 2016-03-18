/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface DDOperation : NSOperation <NSCopying> {

	id _container;
	BOOL _needContinuation;
	int _generationNumber;
	unsigned long long _types;
	DDScanQueryRef _query;
	NSArray* _results;
	BOOL _isCurrentlyUsingTheScanner;
	BOOL _isDiscarded;
	int _tryCount;
	int _containerNotReadyTryCount;
	NSDictionary* _context;

}

@property (nonatomic,retain) id container;                                   //@synthesize container=_container - In the implementation block
@property (assign) BOOL needContinuation;                                    //@synthesize needContinuation=_needContinuation - In the implementation block
@property (nonatomic,retain) NSArray * results;                              //@synthesize results=_results - In the implementation block
@property (assign) int generationNumber;                                     //@synthesize generationNumber=_generationNumber - In the implementation block
@property (assign) int tryCount;                                             //@synthesize tryCount=_tryCount - In the implementation block
@property (assign,nonatomic) unsigned long long detectionTypes;              //@synthesize types=_types - In the implementation block
@property (assign) BOOL isDiscarded;                                         //@synthesize isDiscarded=_isDiscarded - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                         //@synthesize context=_context - In the implementation block
+(DDScannerRef)_sharedScannerForTypes:(unsigned long long)arg1 ;
+(BOOL)_needsFullScannerForDetectionTypes:(unsigned long long)arg1 ;
+(/*^block*/id)urlificationBlockForTypes:(unsigned long long)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)context;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)main;
-(void)cleanup;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(BOOL)isDiscarded;
-(void)dispatchScanQueryCreationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setDetectionTypes:(unsigned long long)arg1 ;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(BOOL)needsFullScanner;
-(int)tryCount;
-(BOOL)containerIsReady;
-(BOOL)needsToStartOver;
-(BOOL)doURLificationOnDocument;
-(BOOL)needContinuation;
-(DDScanQueryRef)scanQuery;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_applyContainerRestrictionsToTypes;
-(BOOL)_containerReadyForDetection;
-(void)_updateGenerationNumber;
-(BOOL)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(void)_setScanQuery:(DDScanQueryRef)arg1 ;
-(unsigned long long)detectionTypes;
-(void)setIsDiscarded:(BOOL)arg1 ;
-(void)setTryCount:(int)arg1 ;
-(int)_createScanQuery;
-(void)setNeedContinuation:(BOOL)arg1 ;
-(int)generationNumber;
-(void)setGenerationNumber:(int)arg1 ;
@end

