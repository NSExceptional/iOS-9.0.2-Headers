/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {

	NSString* _buttonLabel;
	NSString* _descriptionText;
	NSString* _titleText;
	BOOL _buttonEnabled;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasButtonLabel; 
@property (nonatomic,retain) NSString * buttonLabel;                  //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (assign,nonatomic) BOOL hasButtonEnabled; 
@property (assign,nonatomic) BOOL buttonEnabled;                      //@synthesize buttonEnabled=_buttonEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleText; 
@property (nonatomic,retain) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,retain) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
+(id)businessClaimForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTitleText:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTitleText;
-(BOOL)hasButtonLabel;
-(BOOL)buttonEnabled;
-(void)setHasButtonEnabled:(BOOL)arg1 ;
-(BOOL)hasButtonEnabled;
-(NSString *)buttonLabel;
-(void)setButtonLabel:(NSString *)arg1 ;
-(BOOL)hasDescriptionText;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(NSString *)titleText;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
@end

