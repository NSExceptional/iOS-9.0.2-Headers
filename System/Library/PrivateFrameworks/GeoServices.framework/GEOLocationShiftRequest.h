/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLocationShiftRequest : PBRequest <NSCopying> {

	SCD_Struct_GE95 _pixel;

}

@property (assign,nonatomic) SCD_Struct_GE96 pixel;              //@synthesize pixel=_pixel - In the implementation block
-(SCD_Struct_GE16)coordinate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)setPixel:(SCD_Struct_GE96)arg1 ;
-(SCD_Struct_GE96)pixel;
-(BOOL)readFrom:(id)arg1 ;
@end

