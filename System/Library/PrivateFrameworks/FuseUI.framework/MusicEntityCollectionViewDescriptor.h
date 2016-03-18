/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityViewDescriptor.h>

@interface MusicEntityCollectionViewDescriptor : MusicEntityViewDescriptor {

	BOOL _showsSectionHeaders;
	BOOL _shouldFlattenToSingleSectionInRegularWidthAndHeight;
	BOOL _shouldShowOnlyFirstRowOfContent;
	BOOL _wantsEdgeToEdgeLayout;
	double _sectionHeaderBottomContentInset;
	/*^block*/id _layoutMetricsBlock;
	double _verticalLockupMaximumWidth;
	UIOffset _verticalLockupWidthFromCollectionViewWidthLinearRelation;

}

@property (assign,nonatomic) BOOL showsSectionHeaders;                                                       //@synthesize showsSectionHeaders=_showsSectionHeaders - In the implementation block
@property (assign,nonatomic) BOOL shouldFlattenToSingleSectionInRegularWidthAndHeight;                       //@synthesize shouldFlattenToSingleSectionInRegularWidthAndHeight=_shouldFlattenToSingleSectionInRegularWidthAndHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldShowOnlyFirstRowOfContent;                                           //@synthesize shouldShowOnlyFirstRowOfContent=_shouldShowOnlyFirstRowOfContent - In the implementation block
@property (assign,nonatomic) double sectionHeaderBottomContentInset;                                         //@synthesize sectionHeaderBottomContentInset=_sectionHeaderBottomContentInset - In the implementation block
@property (nonatomic,copy) id layoutMetricsBlock;                                                            //@synthesize layoutMetricsBlock=_layoutMetricsBlock - In the implementation block
@property (assign,nonatomic) UIOffset verticalLockupWidthFromCollectionViewWidthLinearRelation;              //@synthesize verticalLockupWidthFromCollectionViewWidthLinearRelation=_verticalLockupWidthFromCollectionViewWidthLinearRelation - In the implementation block
@property (assign,nonatomic) double verticalLockupMaximumWidth;                                              //@synthesize verticalLockupMaximumWidth=_verticalLockupMaximumWidth - In the implementation block
@property (assign,nonatomic) BOOL wantsEdgeToEdgeLayout;                                                     //@synthesize wantsEdgeToEdgeLayout=_wantsEdgeToEdgeLayout - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShowsSectionHeaders:(BOOL)arg1 ;
-(UIOffset)verticalLockupWidthFromCollectionViewWidthLinearRelation;
-(double)verticalLockupMaximumWidth;
-(BOOL)showsSectionHeaders;
-(double)sectionHeaderBottomContentInset;
-(void)setWantsEdgeToEdgeLayout:(BOOL)arg1 ;
-(void)setShouldShowOnlyFirstRowOfContent:(BOOL)arg1 ;
-(BOOL)wantsEdgeToEdgeLayout;
-(void)setVerticalLockupWidthFromCollectionViewWidthLinearRelation:(UIOffset)arg1 ;
-(void)setVerticalLockupMaximumWidth:(double)arg1 ;
-(void)setLayoutMetricsBlock:(id)arg1 ;
-(BOOL)shouldShowOnlyFirstRowOfContent;
-(id)layoutMetricsForTraitCollection:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)shouldFlattenToSingleSectionInRegularWidthAndHeight;
-(void)setShouldFlattenToSingleSectionInRegularWidthAndHeight:(BOOL)arg1 ;
-(void)setSectionHeaderBottomContentInset:(double)arg1 ;
-(id)layoutMetricsBlock;
@end

