/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAppConfig : PBCodable <NSCopying> {

	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;              //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;              //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(BOOL)hasAppMinorVersion;
-(BOOL)hasAppMajorVersion;
-(NSString *)appMinorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

