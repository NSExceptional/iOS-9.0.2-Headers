/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator {

	CGPoint _origin;
	double _referenceHeight;

}

@property (assign,nonatomic) double referenceHeight;              //@synthesize referenceHeight=_referenceHeight - In the implementation block
-(void)setReferenceHeight:(double)arg1 ;
-(void)willParseTiles;
-(BOOL)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(BOOL)_scanTripletWithLargeLead:(SCD_Struct_CK9*)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(SCD_Struct_CK9*)arg1 ;
-(BOOL)_addSpecialSequenceBlock:(SCD_Struct_CK9*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(SCD_Struct_CK9*)arg1 count:(long long)arg2 ;
-(double)referenceHeight;
-(BOOL)_addColumnWithTiles:(SCD_Struct_CK9*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(BOOL)_addColumnWithContiguousTiles:(SCD_Struct_CK9*)arg1 count:(long long)arg2 ;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(BOOL*)arg2 ;
-(BOOL)_scanSpecialSequenceColumn:(SCD_Struct_CK9*)arg1 count:(long long*)arg2 ;
-(BOOL)_isAtEndOfColumn;
-(void)_enumerateColumnFramesWithContiguousTiles:(SCD_Struct_CK9*)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/id)arg4 ;
@end
