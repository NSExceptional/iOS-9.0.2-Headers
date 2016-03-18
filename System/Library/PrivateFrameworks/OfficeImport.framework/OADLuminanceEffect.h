/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@interface OADLuminanceEffect : OADBlipEffect {

	float mBrightness;
	float mContrast;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContrast:(float)arg1 ;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(float)contrast;
@end

