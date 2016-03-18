/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKTransitDeparturesPagingFilter : NSObject {

	BOOL _limitNumCells;
	BOOL _limitNumLines;
	unsigned long long _maxNumCells;
	unsigned long long _numLinesFallbackThreshold;
	unsigned long long _numLinesFallbackValue;

}

@property (assign,nonatomic) BOOL limitNumCells;                                        //@synthesize limitNumCells=_limitNumCells - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumCells;                            //@synthesize maxNumCells=_maxNumCells - In the implementation block
@property (assign,nonatomic) BOOL limitNumLines;                                        //@synthesize limitNumLines=_limitNumLines - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackThreshold;              //@synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackValue;                  //@synthesize numLinesFallbackValue=_numLinesFallbackValue - In the implementation block
+(id)defaultFilterForSequences:(id)arg1 ;
-(unsigned long long)maxNumCells;
-(void)setMaxNumCells:(unsigned long long)arg1 ;
-(void)setLimitNumLines:(BOOL)arg1 ;
-(BOOL)limitNumLines;
-(unsigned long long)numLinesFallbackThreshold;
-(BOOL)limitNumCells;
-(void)setLimitNumCells:(BOOL)arg1 ;
-(void)setNumLinesFallbackThreshold:(unsigned long long)arg1 ;
-(void)setNumLinesFallbackValue:(unsigned long long)arg1 ;
-(unsigned long long)numLinesFallbackValue;
@end

