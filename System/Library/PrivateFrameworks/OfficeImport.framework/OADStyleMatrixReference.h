/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {

	unsigned long long mMatrixIndex;
	OADColor* mColor;

}
+(id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setMatrixIndex:(unsigned long long)arg1 ;
-(unsigned long long)matrixIndex;
-(id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2 ;
@end

