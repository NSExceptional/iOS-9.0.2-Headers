/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@class OADShape, CMDrawingContext;

@interface PMDrawableMapper : CMDrawableMapper {

	OADShape* mShape;
	CMDrawingContext* mDrawingContext;
	BOOL mTopLevelMapper;

}
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
-(void)mapChartAt:(id)arg1 withState:(id)arg2 ;
-(void)mapRectangularShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapShapeAsBackgroundAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxWithState:(id)arg1 ;
-(void)mapFreeForm:(id)arg1 orientedBounds:(id)arg2 transformedBounds:(CGRect*)arg3 state:(id)arg4 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBounds;
-(CGRect)slideRect;
-(void)setTopLevelMapper:(BOOL)arg1 ;
-(void)setDrawingContext:(id)arg1 ;
-(BOOL)isTopLevelMapper;
-(id)drawingContext;
@end
