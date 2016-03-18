/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MSPMediaSyncError : PBCodable <NSCopying> {

	int _errorCode;
	NSString* _errorDescription;
	SCD_Struct_MI3 _has;

}

@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)hasErrorDescription;
-(NSString *)errorDescription;
-(BOOL)readFrom:(id)arg1 ;
@end

