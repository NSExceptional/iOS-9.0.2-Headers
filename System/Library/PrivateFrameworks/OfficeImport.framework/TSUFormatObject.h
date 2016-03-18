/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSUFormatObject : NSObject <NSCopying, NSMutableCopying> {

	SCD_Struct_TS55 mFormatStruct;
	BOOL mUseExpandedContents;

}

@property (nonatomic,readonly) SCD_Struct_TS56 formatStruct; 
@property (nonatomic,readonly) BOOL useExpandedContents; 
+(id)defaultDateFormat:(id)arg1 ;
+(id)defaultDurationFormat;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_TS56)arg1 ;
-(id)initWithTSUFormatFormatStruct:(SCD_Struct_TS56)arg1 useExpandedContents:(BOOL)arg2 ;
-(SCD_Struct_TS56)formatStruct;
-(BOOL)useExpandedContents;
-(void)p_setFormatStruct:(SCD_Struct_TS56)arg1 ;
@end

