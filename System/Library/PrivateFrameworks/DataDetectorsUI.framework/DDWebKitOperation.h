/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDOperation.h>

@class DOMNode, WebFrame;

@interface DDWebKitOperation : DDOperation {

	DOMNode* _startNode;
	int _startOffset;
	DOMNode* _endNode;
	int _endOffset;

}

@property (nonatomic,retain) DOMNode * startNode;               //@synthesize startNode=_startNode - In the implementation block
@property (assign) int startOffset;                             //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,retain) DOMNode * endNode;                 //@synthesize endNode=_endNode - In the implementation block
@property (assign) int endOffset;                               //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) WebFrame * container; 
-(int)endOffset;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)cleanup;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(BOOL)containerIsReady;
-(BOOL)needsToStartOver;
-(BOOL)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_applyContainerRestrictionsToTypes;
-(BOOL)_containerReadyForDetection;
-(void)_updateGenerationNumber;
-(BOOL)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(void)setStartNode:(DOMNode *)arg1 ;
-(void)setEndNode:(DOMNode *)arg1 ;
-(DOMNode *)startNode;
-(DOMNode *)endNode;
-(void)setEndOffset:(int)arg1 ;
@end

