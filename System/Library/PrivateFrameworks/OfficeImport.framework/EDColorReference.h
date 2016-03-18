/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {

	EDResources* mResources;
	int mSystemColorID;
	unsigned long long mColorIndex;
	unsigned long long mThemeIndex;
	double mTint;

}
+(id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3 ;
+(id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithResources:(id)arg1 ;
+(id)colorReferenceWithColor:(id)arg1 resources:(id)arg2 ;
-(int)systemColorID;
-(unsigned long long)colorIndex;
-(unsigned long long)themeIndex;
-(double)tint;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
-(BOOL)isEqualToColorReference:(id)arg1 ;
@end
