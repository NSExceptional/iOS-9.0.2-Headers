/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADGraphicProperties, EDCollection, EDResources, NSArray;

@interface CHDLegend : NSObject {

	int mLegendPosition;
	OADGraphicProperties* mGraphicProperties;
	unsigned long long mFontIndex;
	EDCollection* mLegendEntries;
	EDResources* mResources;
	BOOL mIsVertical;
	BOOL mIsOverlay;
	NSArray* mLabelEffects;

}
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)dealloc;
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)graphicProperties;
-(int)legendPosition;
-(void)setLabelEffects:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setLegendPosition:(int)arg1 ;
-(void)setIsSingleColumnLegend:(BOOL)arg1 ;
-(id)labelEffects;
-(id)legendEntries;
-(BOOL)isSingleColumnLegend;
-(BOOL)isOverlay;
-(void)setIsOverlay:(BOOL)arg1 ;
@end

