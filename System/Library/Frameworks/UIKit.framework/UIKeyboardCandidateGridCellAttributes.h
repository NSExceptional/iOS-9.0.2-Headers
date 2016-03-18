/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSIndexPath;

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {

	BOOL _dummy;
	BOOL _groupHeader;
	BOOL _needsPaddingForIndexScrubber;
	BOOL _groupShowsAlternativeText;
	BOOL _secondaryCandidateAppearance;
	BOOL _emphasizedAppearance;
	int _candidatesVisualStyle;
	NSIndexPath* _candidateIndexPath;
	SCD_Struct_UI38 _visualStyling;
	unsigned long long _candidateNumber;
	unsigned long long _rowIndex;
	unsigned long long _edges;
	CGSize _rowSize;

}

@property (nonatomic,retain) NSIndexPath * candidateIndexPath;                //@synthesize candidateIndexPath=_candidateIndexPath - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI38 visualStyling;                   //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                       //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) BOOL dummy;                                      //@synthesize dummy=_dummy - In the implementation block
@property (assign,nonatomic) BOOL groupHeader;                                //@synthesize groupHeader=_groupHeader - In the implementation block
@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) unsigned long long rowIndex;                     //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                  //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) BOOL needsPaddingForIndexScrubber;               //@synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber - In the implementation block
@property (assign,nonatomic) BOOL groupShowsAlternativeText;                  //@synthesize groupShowsAlternativeText=_groupShowsAlternativeText - In the implementation block
@property (assign,nonatomic) BOOL secondaryCandidateAppearance;               //@synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance - In the implementation block
@property (assign,nonatomic) BOOL emphasizedAppearance;                       //@synthesize emphasizedAppearance=_emphasizedAppearance - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setEdges:(unsigned long long)arg1 ;
-(unsigned long long)representedElementCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI38)arg1 ;
-(SCD_Struct_UI38)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(unsigned long long)rowIndex;
-(BOOL)dummy;
-(BOOL)groupHeader;
-(NSIndexPath *)candidateIndexPath;
-(void)setNeedsPaddingForIndexScrubber:(BOOL)arg1 ;
-(unsigned long long)candidateNumber;
-(void)setDummy:(BOOL)arg1 ;
-(CGSize)rowSize;
-(unsigned long long)edges;
-(BOOL)needsPaddingForIndexScrubber;
-(BOOL)groupShowsAlternativeText;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(BOOL)secondaryCandidateAppearance;
-(void)setSecondaryCandidateAppearance:(BOOL)arg1 ;
-(BOOL)emphasizedAppearance;
-(void)setEmphasizedAppearance:(BOOL)arg1 ;
-(void)setCandidateIndexPath:(NSIndexPath *)arg1 ;
-(void)setGroupHeader:(BOOL)arg1 ;
-(void)setRowIndex:(unsigned long long)arg1 ;
-(void)setRowSize:(CGSize)arg1 ;
-(void)setGroupShowsAlternativeText:(BOOL)arg1 ;
@end

