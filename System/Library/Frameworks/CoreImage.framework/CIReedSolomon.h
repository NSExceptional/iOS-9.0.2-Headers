/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIReedSolomon : NSObject {

	int _expTable[256];
	int _logTable[256];
	int _cachedGeneratorNum;
	int _memoryCapacity;
	SCD_Struct_CI36* _cachedGenerators;

}
-(id)initReedSolomon;
-(BOOL)encode:(int*)arg1 length:(int)arg2 bytes:(int)arg3 ;
-(BOOL)fillPoly:(SCD_Struct_CI36*)arg1 coefficients:(int*)arg2 length:(int)arg3 ;
-(void)clearPoly:(SCD_Struct_CI36*)arg1 ;
-(BOOL)isZero:(SCD_Struct_CI36*)arg1 ;
-(SCD_Struct_CI36*)copyPoly:(SCD_Struct_CI36*)arg1 ;
-(int)addOrSubtract:(int)arg1 with:(int)arg2 ;
-(int)multiply:(int)arg1 with:(int)arg2 ;
-(int)Degree:(SCD_Struct_CI36*)arg1 ;
-(int)polyCoefficient:(SCD_Struct_CI36*)arg1 degree:(int)arg2 ;
-(int)inverse:(int)arg1 ;
-(SCD_Struct_CI36*)multiplyByMonomial:(SCD_Struct_CI36*)arg1 degree:(int)arg2 coefficient:(int)arg3 ;
-(SCD_Struct_CI36*)addOrSubtractPoly:(SCD_Struct_CI36*)arg1 with:(SCD_Struct_CI36*)arg2 ;
-(int)Exp:(int)arg1 ;
-(SCD_Struct_CI36*)multiplyPoly:(SCD_Struct_CI36*)arg1 with:(SCD_Struct_CI36*)arg2 ;
-(SCD_Struct_CI36*)buildGenerator:(int)arg1 ;
-(SCD_Struct_CI36*)createMonomial:(int)arg1 coefficient:(int)arg2 ;
-(int*)coefficients:(SCD_Struct_CI36*)arg1 ;
-(SCD_Struct_CI36*)divide:(SCD_Struct_CI36*)arg1 by:(SCD_Struct_CI36*)arg2 ;
-(void)dealloc;
@end

