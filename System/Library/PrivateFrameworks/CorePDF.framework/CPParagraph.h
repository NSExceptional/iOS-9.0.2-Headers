/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@class CPListItem;

@interface CPParagraph : CPRegion {

	BOOL noIndentation;
	BOOL below;
	unsigned long long alignment;
	BOOL hasDropCap;
	id flowProperties;
	CPListItem* listItem;
	double preformatWidth;

}

@property (nonatomic,retain) CPListItem * listItem; 
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)alignment;
-(unsigned long long)index;
-(void)accept:(id)arg1 ;
-(void)setListItem:(CPListItem *)arg1 ;
-(double)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(id)flowProperties;
-(void)setFlowProperties:(id)arg1 ;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(BOOL)isTextRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(void)setNoIndentation:(BOOL)arg1 ;
-(BOOL)noIndentation;
-(BOOL)hasDropCap;
-(void)setHasDropCap:(BOOL)arg1 ;
-(void)explode;
-(CGRect)reducedBounds;
-(void)setBelow:(BOOL)arg1 ;
-(BOOL)below;
-(BOOL)isPreformattedWithUnitWidth:(double*)arg1 ;
-(CPListItem *)listItem;
@end

